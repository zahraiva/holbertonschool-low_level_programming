#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * 
 * malloc_checked - prototype for allocates memory using malloc
 * @b: - b
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
