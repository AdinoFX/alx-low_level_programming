#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: (0)
 *
 */
int main(void)
{
	int numOne, numTwo, numThree;

	numOne = '0';
	numTwo = '0';
	numThree = '0';

	while (numOne <= '9')
	{
		while (numTwo <= '9')
		{
			numThree = '0';
			while (numThree <= '9')
			{
				if (numOne < numTwo && numTwo < numThree)
				{
					putchar(numOne);
					putchar(numTwo);
					putchar(numThree);

					if (numOne != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				numThree++;
			}
			numTwo++;
		}
		numOne++;
		numTwo = '0';
	}
	putchar('\n');
	return (0);
}
