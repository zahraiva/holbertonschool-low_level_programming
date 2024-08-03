#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - get sum of the list
  * @head: head node
  * Return: s
  */


int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
