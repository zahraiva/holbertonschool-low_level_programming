#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - main
 * @head: of the linked list
 * @str: var1
 * Return: linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int length_nodesdata = 0, index = 0;
	char *duplicate_str = strdup(str);
	list_t *t1node = (list_t *) malloc(sizeof(list_t));
	list_t *t2node;

	if (duplicate_str == NULL)
	{
		free(th1node);
		return (NULL);
	}
	if (t1node == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		length_nodesdata++;
		index++;
	}

	t1node->str = duplicate_str;
	t1node->len = length_nodesdata;
	t1node->next = NULL;

	if (*head == NULL)
		*head = t1node;
	else
	{
		*head = t2node;

		while (t2node->next != NULL)
		{
			t2node = t2node->next;
		}
		t2node->next = t1node;
	}
	return (*head);

}
