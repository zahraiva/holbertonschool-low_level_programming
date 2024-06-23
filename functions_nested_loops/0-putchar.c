#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char putchar_str[] = "_putchar\n";

    i = 0;
    while (putchar_str[i] != '\0')
    {
        _putchar(putchar_str[i]);
        i++;
    }

    return (0);
}

