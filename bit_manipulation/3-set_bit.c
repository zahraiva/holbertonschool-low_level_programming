#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - it sets value of a bit
 * @n: number
 * @index: ind of a bit
 * Return: 1 if works, -1 if doesnt
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
		return (1);
}
