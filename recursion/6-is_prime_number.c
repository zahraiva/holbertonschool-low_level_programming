#include "main.h"
/**
 * is_prime_number - check the code
 * @n: - number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
{ return (0);
}
else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
{
return (0);
}
return (1);
}
