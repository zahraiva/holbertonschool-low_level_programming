#include "main.h"
/**
 * _memset - check the code
 * @s: - s
 * @b: - b
 * @n: - n
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
