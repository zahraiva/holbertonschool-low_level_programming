#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - main
 * @head: clone of the dlinkedlist
 * @n: var1
 * Return: front node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *frontnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (frontnode == NULL)
	{
		return (NULL);
	}
	frontnode->n = n;
	frontnode->prev = NULL;
	frontnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = frontnode;
	}
	*head = frontnode;

	return (frontnode);
}
