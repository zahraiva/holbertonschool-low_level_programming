#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array
 *
 * @size - size
 * @c - c
 *
 * Return - Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size);
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (c);

}
