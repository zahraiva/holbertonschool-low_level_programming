#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char zzzz  = 'a';

	while (zzzz <= 'z')
	{
		_putchar(zzzz);
		zzzz++;
	}
	_putchar('\n');
}
