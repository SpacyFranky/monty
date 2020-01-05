#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main code.
 * @argc: argument count.
 * @argv: argument vecteur.
 */
int main(int argc, char *argv[])
{
	FILE *f;
	int lines;
	char ch;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	if (f == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	lines = 0;
	while (!feof(f))
	{
		ch = fgetc(f);
		if (ch == '\n')
			lines++;
	}
	printf("%d\n", lines);
	fclose(f);
	return (0);
}
