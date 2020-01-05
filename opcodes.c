#include "monty.h"
#include <stdio.h>
#include <string.h>

/**
 * *add_dnodeint - adds a new node at the beginning of a stack_t.
 * @head: doubly linked list pointer.
 * @n: is int type
 * Return: the address of new node
 */
stack_t *add_dnodeint(stack_t **head, int n)
{
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (*head);
}




/**
 * opcode_push - function push node to the beginning
 * @stack :is stack_t type, pointer to node
 * @lin_number :is int type
 * @token2 : is char type pointer
 */

void opcode_push(stack_t **stack, char *token2, unsigned int line_number)
{
	int x;

	if (stack == NULL)
	{
		stack = malloc(sizeof(stack_t));
		printf("push stack is NULL\n");
	}
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
 * @stack: is stack_t type ,double pointer to node
 * @token2:is char type pointer
 * @line_number:is int type
 */

void opcode_pall(stack_t **stack, __attribute__((unused))char *token2
, __attribute__((unused))unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/*
  void stack_free(stack_t *head)
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
