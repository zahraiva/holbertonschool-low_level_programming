#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char password[100];
	int i = 0;

	srand(time(NULL));

	while (sum < 2772)
	{
		password[i] = rand() % 78 + 48; /* Random printable ASCII characters */
		sum += password[i];
		i++;
	}

	password[i - 1] -= (sum - 2772); /* Adjust the last character to match the required sum */
	password[i] = '\0';

	printf("%s", password);
	
	return (0);
}

