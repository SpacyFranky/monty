#include "monty.h"
#include <string.h>
/**
 * inline - gets inline of file
 * @f: opcode byte file.
 */
void inline_f(FILE *f)
{
	unsigned int lines = 0;
        char *token1, *buffer = NULL;
        size_t bufsize = 0;
        ssize_t line_size;
	char *token2;
	stack_t *stack;

	stack = NULL;
	line_size = getline(&buffer, &bufsize, f);
	while (line_size >= 0)
	{
		lines++;
		token1 = strtok(buffer, " ");
		token2 = strtok(0, " ");

		(*get_func(token1))(&stack, token2, lines);

		line_size = getline(&buffer, &bufsize, f);
	}
}
