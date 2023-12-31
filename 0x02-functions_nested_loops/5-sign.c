#include "main.h"
/**
 * print_sign - Prints the sign of a value
 * @n: the value to check
 *
 * Return: 1 if positive, 0 if zero, / if negative
 */
int print_sign(int n)
{
	int negative = -1;
	char  ch = (char) negative;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (ch);
	}
}
