#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	putchar ('\n');

	return (0);
}
