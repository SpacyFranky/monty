#include "monty.h"
#include <stdio.h>
#include <string.h>

/**
 * opcode_push - function push node to the beginning
 * @stack :is stack_t type, pointer to node
 * @line_number :is int type
 * @token2 : is char type pointer
 */

void opcode_push(stack_t **stack, char *token2, unsigned int line_number)
{
	int x;

	if (token2 == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	x = atoi(token2);
	add_dnodeint(stack, x);
}
/**
 * opcode_pall - function print all elements in the stack
 * @stack: is stack_t type ,double pointer
 * @token2:is char type pointer
 * @line_number:is int type
 */

void opcode_pall(stack_t **stack, __attribute__((unused))char *token2
, __attribute__((unused))unsigned int line_number)
{
	stack_t *temp = *stack;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
 * stack_free - frees stack.
 * @stack: doubly linked stack.
 * @token2: token of value.
 * @line_number: line number.
 */
void stack_free(stack_t **stack, __attribute__((unused))char *token2,
		__attribute__((unused))unsigned int line_number)
{
	stack_t *tempo;

	if (stack == NULL)
	{
		return;
	}
	while ((*stack)->next != NULL)
	{
		tempo = *stack;
		*stack = (*stack)->next;
		free(tempo);
	}
}

/**
 * opcode_pint - function print the top of the stack
 * @stack : is stack_t type double pointer
 * @token2 : is char type pointer
 * @line_number : is int type
 */
void opcode_pint(stack_t **stack, __attribute__((unused))char *token2
, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
			exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*stack)->n);
	}
}

/**
 * opcode_pop - pops node.
 * @stack: doubly linked stack.
 * @token2: token.
 * @line_number: line number.
 */
void opcode_pop(stack_t **stack, __attribute__((unused))char *token2,
		unsigned int line_number)
{
	stack_t *tempo;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	tempo = *stack;
	*stack = tempo->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tempo);
}
