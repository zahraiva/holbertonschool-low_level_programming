#include "main.h"
/**
 * _strchr - check the code
 *  @c - c
 *  @s - s
 *  Return: Always 0.
 */
char *_strchr(char *s, char c);
{
	while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
