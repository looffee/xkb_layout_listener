#include "xkb_layout.hpp"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    fprintf(stderr, "Callback script is not provided!\n");
    return 1;
  }

  char *callback = argv[1];

  XKB_LAYOUT_H::init();
  XKB_LAYOUT_H::startListening();

  while (1)
  {
    XKB_LAYOUT_H::waitNextEvent();
    system(callback);
  }
  
  return 0;
}
