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
	int val;
	unsigned int lines = 0;
	char *token, *buffer = NULL;
	size_t bufsize = 0;
	ssize_t line_size;

	/*verification of argc*/
	verif(argc);
	f = fopen(argv[1], "r");
	/*verification of the Monty byte code file*/
	exist(f, argv);
	line_size = getline(&buffer, &bufsize, f);
	while (line_size >= 0)
        {
                lines++;
                token = strtok(buffer, " ");

		is_token_opcode(token, lines);

		if (strcmp(token, "pall") == 0)
			break;

		token = strtok(0, " ");

		val = atoi(token);
		if (val == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n",
				lines);
			exit(EXIT_FAILURE);
		}

                line_size = getline(&buffer, &bufsize, f);
        }
	/*push opcode funtion*/
	fprintf(stdout, "Code works fine!\n");
	fclose(f);
	return (0);
}
