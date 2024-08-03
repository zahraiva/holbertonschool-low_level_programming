#include "lists.h"
/**
 * add_dnodeint - func
 * @head: adr
 * @n: val
 * Return: i
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
