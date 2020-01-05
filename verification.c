#include "monty.h"
/**
 * verif - checks the argument count if it's different
 * to 2. If it is, it prints an error message to stderr.
 * @argc: argument count.
 */
void verif(int argc)
{
	if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }
}

/**
 * exist - checks if the file exists in the current directory
 * or not. If it doesn't exist, it prints an error message
 * to stderr.
 * @f: the Monty byte code file.
 */
void exist(FILE *f, char *argv[])
{
	if (f == NULL)
        {
                fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }
}
