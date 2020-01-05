#include "monty.h"
#include <stdio.h>
/**
 * upcode_push - function
 * @n :is int type
 * return : address of new node
 */
stack_t opcode_push(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	int a = 5;
	stack_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->next = *head;
	new->prev = NULL;
	new->n = a;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
/**
 *
 *
 *
 */

void  opcode_pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *tempo;

	tempo = *stack;
	while(tempo->next != NULL)
	{
		printf("%d\n",tempo->n);
		tempo = tempo->next;

	}
}
/*void stack_free(stack_t *head)
{
	stack_t *tempo;

       	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
*/
/*void opcode_pint(stack_t **stack, unsigned int line_number)
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
*/
/*void opcode_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tempo;

	if (stack == NULL || *stack == NULL)
	{
		printfprintf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	tempo = *stack;
	stack = tempo->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tempo);
}
*/
