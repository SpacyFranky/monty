#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main code.
 * @argc: argument count.
 * @argv: argument vecteur.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	FILE *f;

	/*verification of argc*/
	verif(argc);
	f = fopen(argv[1], "r");
	/*verification of the Monty byte code file*/
	exist(f, argv);
	inline_f(f);
	fclose(f);
	return (0);
}
