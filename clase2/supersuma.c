#include <stdio.h>

extern int supersuma(int, int, int, int, int, int, int, int);

int main(int argc, char** argv) {
	printf("%i %i\n", supersuma(4, 5, 6, 7, 8, 9, 10, 11), 4-5+6-7+8-9+10-11);
	return 0;
}
