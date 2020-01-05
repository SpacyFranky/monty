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
/**
 *
 *
 */
void upcode_add(stack_t **stack, unsigned int line_number)
{
	int total_add;
        stack_t *tempo;

	(stack == NULL || *stack == NULL ||  (*stack)->next  == NULL)
        {
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tempo = *stack;
	(*stack) = (*stack_t)->next;
	total_add = tempo->n + (*stack)->n;
	(*stack)->n = total_add;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 *
 *
 */
void opcode_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}