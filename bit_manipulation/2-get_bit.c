#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - return value
 * @h: number
 * @index: ind of a bit
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
