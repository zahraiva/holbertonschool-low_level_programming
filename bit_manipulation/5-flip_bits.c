#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - num of bits to flip
 * @n: first num
 * @m: second num
 * Return: num of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, x = m ^ n;

	while (x)
	{
		if (x & 1)
			counter++;
		x >>= 1;
	}
	return ((unsigned int)counter);
}
