#include "monty.h"
/**
 * *add_dnodeint - adds a new node at the beginning of a stack_t.
 * @head: doubly linked list pointer.
 * @n: is int type
 * Return: the address of new node
 */
void add_dnodeint(stack_t **head, int n)
{
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));

	if (newnode == NULL)
		return;
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
}
