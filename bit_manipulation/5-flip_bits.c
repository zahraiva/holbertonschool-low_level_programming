#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - num of bits to flip
 * @n: first num
 * @m: second num
 * Return: num of bits needed to flip
 */
int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
