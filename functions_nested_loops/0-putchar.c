#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char *str = "_putchar\n";

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}

