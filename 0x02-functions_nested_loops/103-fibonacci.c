#include <stdio.h>

/**
 * main - entry point of the program that print even-valued fibonacci seq
 *
 * Return: return 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, f;
	float total_sum;

	while (1)
	{
		f = f1 + f2;
		if (f > 4000000)
			break;

		if ((f % 2) == 0)
			total_sum += f;

		f1 = f2;
		f2 = f;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
