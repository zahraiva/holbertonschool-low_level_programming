#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char zzzz = 'a';
	int a = 0;

	while (a < 10)
	{
		while (zzzz <= 'z')
		{
			_putchar(zzzz);
			zzzz++;
		}
		_putchar('\n');
		a++;
		zzzz = zzzz - 26;
	}
}
