#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node
 * @head: head node
 * @n: valuse
 * Return: size_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *buf;
	dlistint_t *temp = *head;

	buf = malloc(sizeof(dlistint_t));
	if (buf == NULL)
		return (NULL);
	buf->n = n;
	buf->next = NULL;
	if (*head == NULL)
	{
		buf->prev = NULL;
		*head = buf;
		return (buf);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = buf;
		buf->prev = temp;
	return (buf);
}
