#include <stdio.h>
/**
 * main - priint alphabets without char and use putchar
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int alphabet = '0';

	while (alphabet <= '9')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
