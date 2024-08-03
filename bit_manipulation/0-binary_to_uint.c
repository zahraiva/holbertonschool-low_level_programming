#include "main.h"
/**
 * binary_to_uint - binary number to an unsigned int convert
 * @b: data b
 * Return: num
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0, num = 0;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
		;
	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
	num = 2 * num + (b[i] - '0');
	}
	return (num);
}
