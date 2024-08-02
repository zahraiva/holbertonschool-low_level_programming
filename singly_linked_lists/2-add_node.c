#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - main
 * @head: double pointer for 1node
 * @str: var1
 * Return: upd node
 */

list_t *add_node(list_t **head, const char *str)
{
	int length_nodesdata = 0, index = 0;
	char *string_dublicate = strdup(str);

	list_t *upd_node = (list_t *) malloc(sizeof(list_t));

	if (string_dublicate == NULL)
	{
		free(upd_node);
		return (NULL);
	}

	if (upd_node == NULL)
	{
		return (NULL);
	}

	while (str[index] != '\0')
	{
		length_nodesdata++;
		index++;
	}

	upd_node->str = string_dublicate;
	upd_node->len = length_nodesdata;
	upd_node->next = *head;
	*head = upd_node;

	return (upd_node);
}
