#include "monty.h"
#include <string.h>

/**
 * nameof_op - looks for the valid opcode instructions
 * @name: name of opcode.
 */
typedef struct nameof_op {
	char *name;
} name_op;

/**
 * get_opcode - looks for a valid opcode instruction.
 * @string: the opcode.
 * Return: 1 if found, -1 if not found.
 */
int get_opcode(char string[])
{
	name_op a[] = {
		{"push"},
		{"pall"},
		{"\n"},
		{"\0"},
		{"NULL"}
	};
	int i;

	for (i = 0; a[i].name != NULL; i++)
	{
		if (strcmp(string, a[i].name) == 0)
			return (1);
	}
	return (-1);
}
