#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * opcode_swap - swap nodes
 * @stack: doubley pointed stack
 * @token2: pointer to char.
 * @line_number: line number.
 */
void opcode_swap(stack_t **stack, __attribute__((unused))char *token2,
		 unsigned int line_number)
{
	stack_t *tempo;

	if (stack == NULL || *stack == NULL || (*stack) == NULL)
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
 * opcode_add - add elements of the stack
 * @stack: double pointer
 * @line_number: is int type
 * @token2 : is char type
 */
void opcode_add(stack_t **stack, __attribute__((unused))char *token2
		, unsigned int line_number)
{
	int total_add;
	stack_t *tempo;

	if (stack == NULL || *stack == NULL ||  (*stack)->next  == NULL)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tempo = *stack;
	(*stack) = (*stack)->next;
	total_add = tempo->n + (*stack)->n;
	(*stack)->n = total_add;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 * opcode_nop - dosen't do anything
 * @stack: doubly pointed
 * @token2: is char type
 * @line_number: int type
 */
void opcode_nop(stack_t **stack, __attribute__((unused))char *token2,
		unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	(void)token2;
}
