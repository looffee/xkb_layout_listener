#ifndef XKB_LAYOUT_H
#define XKB_LAYOUT_H

int init();
int startListening();
void waitNextEvent();
char *getLayout();
void dispose();

#endif
