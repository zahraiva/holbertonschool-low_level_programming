#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  * binary_to_uint - binary to unsigned int convertor
  * @b: binary data
  * Return: unsigned int if success, 0 if not
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len = 0, res = 0;

	if (!b)
		return (0);
	while (*(b + len))
		len++;
	while (b[i])
	{
		if (*(b + i) > '1' || *(b + i) < '0')
			return (0);
		res = (res << 1) + (*(b + i) - '0');
	}
	return (res);
}
