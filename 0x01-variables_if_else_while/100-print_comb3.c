#include <stdio.h>
/**
 * main - printing combination of two possible numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	int numOne, numTwo;

	numOne = '0';
	numTwo = '0';

	while (numOne <= '9')
	{
		while (numTwo <= '9')
		{
			if (numOne < numTwo)
			{
				putchar(numOne);
				putchar(numTwo);
				if (numOne != '8' || (numOne == '8' && numTwo != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			numTwo++;
		}
		numOne++;
		numTwo = 0;
	}
	putchar('\n');
	return (0);
}
