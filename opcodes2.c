#include "monty.h"

/**
 *
 *
 *
 */
void opcode_swap(stack_t **stack_t, unsigned int line_number)
{
	stack_t *tempo;

	if (stack == NULL || *stack == NULL || (*stack_t) == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tempo = (*stack)->next;
	(*stack)->prev = tempo;
	tempo->prev = NULL;
	(*stack)->next = tempo->next;
	tempo->next = *stack;
	*stack = tempo;
}
