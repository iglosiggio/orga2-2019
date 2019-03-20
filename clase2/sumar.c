#include <stdio.h>

extern int sum(int, int);

int main(int argc, char** argv) {
	printf("%i\n", sum(10, 11));
	return 0;
}
