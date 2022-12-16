#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: return 0
 */
int main(void)
{
	long prime = 612852475143, divide;

	while (divide < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (divide = 3; divide < (prime / 2); divide += 2)
		{
			if ((prime % divide) == 0)
				prime /= divide;
		}
	}

	printf("%d\n", prime);

	return (0);
}
