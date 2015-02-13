#include <stdio.h>


int main(int argc, char** argv)//argc nos dice cuantos argumentos tenemos, y el argv nos los guarda en un puntero.argc vale 1 porque no ponemos nada.
{	
	char c[10] = "hola";// en el fondo, esto es un puntero, c es la direccion del primero de los 10 caracteres
	printf("%s", &c[1]);
	getchar();

}