#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_binary - function
 * @n: number
 * Return: the converted number
*/
void print_binary(unsigned long int n)
{
	unsigned long int biggest_binary;
	int firstbit = 0;

	biggest_binary = 1UL << 63;

	while (biggest_binary != 0)
	{
		if (biggest_binary & n)
		{
			_putchar('1');
			firstbit = 1;
		}
		else if (firstbit)
		{
			_putchar('0');
		}
		biggest_binary = biggest_binary >> 1;
	}
	if (!firstbit)
		_putchar('0');
}
