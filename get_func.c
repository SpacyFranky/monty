#include "monty.h"
/**
 * *get_func - this will search for which of the right function to operate
 * opcode command.
 * @stack: the stack that has the nodes.
 * @line_number: line number inside the file
 * Return: the needed function.
 */
void (*get_func(stack_t **stack, unsigned int line_number))(instruction_t)
{
	int i;
	instruction_t op[] = {
		{"push", opcode_push},
		{"pall", opcode_pall},
		{NULL, NULL}
	};

	return (NULL);
}
