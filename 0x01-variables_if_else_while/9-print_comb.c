#include <stdio.h>
/**
 * main - print numbers separated by commas and space
 *
 * Return: (0)
 *
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
