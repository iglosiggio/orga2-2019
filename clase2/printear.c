#include <stdio.h>

extern void imprime_parametros(int, double, char*);

int main(int argc, char** argv) {
	imprime_parametros(33, 3.33, "Hola mundo!");
	return 0;
}
