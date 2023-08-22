#include "main.h"
/**
 * puts_half - print the second half of a string
 *
 * @str: input
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int half, i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	half = (len - 1) / 2;

	for (i = (half + 1); i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
