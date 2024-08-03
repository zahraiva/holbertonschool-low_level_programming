#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  returns node of a dlistint_t linked list
 * @head: head and this first node
 * @index: index of the node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int c = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (c == index)
		{
			return (temp);
		}
		temp = temp->next;
		c++;
	}
	return (temp);
}
