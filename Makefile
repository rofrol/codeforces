all:
	gcc -static -fno-optimize-sibling-calls -fno-strict-aliasing -DONLINE_JUDGE -fno-asm -lm -s -O2 main.c
mingw:
	gcc -static -fno-optimize-sibling-calls -fno-strict-aliasing -DONLINE_JUDGE -fno-asm -lm -s -Wl,--stack=268435456 -O2 main.c
gpp:
	g++ -Wall -W -O2 -s -pipe main.c
std11:
	g++ -Wall -W -O2 -s -pipe -std=c++11 main.cpp
