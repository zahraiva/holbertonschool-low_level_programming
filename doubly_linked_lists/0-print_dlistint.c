#include "lists.h"

/**
 * print_dlistint - main
 * @h: var1
 * Return: mynodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t countnodes = 0;

	while (h)
	{
		countnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (countnodes);
}
