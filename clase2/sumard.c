#include <stdio.h>

extern double sum(double, double);

int main(int argc, char** argv) {
	printf("%f\n", sum(5.5, 99.3));
	return 0;
}
