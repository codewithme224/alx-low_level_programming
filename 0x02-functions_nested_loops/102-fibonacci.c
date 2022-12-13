#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: return 0
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, f;

	for (count = 0; count < 50; count++)
	{
		f = f1 + f2;
		printf("%lu", f);

		f1 = f2;
		f2 = f;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
