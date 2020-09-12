all:
	g++ -c -I/usr/include xkb_layout.cpp -lX11 -lxkbfile && g++ -I/usr/include xkb_layout_listener.cpp -lX11 -lxkbfile -o xkb_layout_listener xkb_layout.o
