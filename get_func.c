#include "monty.h"
#include <string.h>
/**
 * *get_func - this will search for which of the right function to operate
 * @line_number: line number.
 * Return: returns function.
 */
void (*get_func(char *word))(stack_t **stack, char *token2,
			     unsigned int line_number)
{
	int i;
	instruction_t op[] = {
		{"push", opcode_push},
		{"pall", opcode_pall},
		{"pint", opcode_pint},
		{"nop", opcode_nop},
		{"swap", opcode_swap},
		{"free", stack_free},
		{"pop", opcode_pop},
		{"add", opcode_add},
		{NULL, NULL}
	};

	for (i = 0; op[i].opcode != NULL; i++)
	{
		if (strcmp(word, op[i].opcode) == 0)
			return (op[i].f);
	}
	return (NULL);
}
