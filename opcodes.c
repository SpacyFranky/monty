#include "monty.h"

/**
 * upcode_push - function
 * @n :is int type
 * return : address of new node
 */
stack_t upcode_push(int n)
{

	stack_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
