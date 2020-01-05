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
	int lines;
	char *token, *buffer = NULL;
	size_t bufsize = 0;
	ssize_t line_size;

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
	line_size = getline(&buffer, &bufsize, f);
	lines = 0;
	while (line_size >= 0)
	{
		lines++;
		printf("L%d:", lines);
		token = strtok(buffer, " ");
		while (token != NULL)
		{
			printf(" %s", token);
			token = strtok(0, " ");
		}
		line_size = getline(&buffer, &bufsize, f);
	}
	printf("\n%d\n", lines);
	fclose(f);
	return (0);
}
