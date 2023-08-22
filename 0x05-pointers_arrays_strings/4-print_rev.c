#include "main.h"
/**
 * print_rev - print string in reverse
 *
 * @s: string to be reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a--; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
