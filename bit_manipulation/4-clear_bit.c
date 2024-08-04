#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * clear_bit - sets the value of bit
  * @n: number
  * @index: index of bit
  * Return: the value of a bit at index. if doesnt work -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 63)
		return (-1);
	x <<= index;
	x = ~x;
	*n &= x;
	return (1);
}
