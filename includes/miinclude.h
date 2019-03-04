#include <stdio.h>
#include <string.h>

void f()
{
	char c1[100]="Hola mundo";
	char c2[100]=", soy Manuel Mendoza. \n";
	printf ("%s\n", strcat(c1, c2));
	return;
}
