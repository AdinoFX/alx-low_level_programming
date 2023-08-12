#include <stdio.h>
/**
 * main - printing hexadecimal numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	char num = '0';
	char alpha = 'a';

	while (num <= '9')
{
	putchar(num);
	num++;
}
while (alpha <= 'f')
{
	putchar(alpha);
	alpha++;
}
putchar('\n');
return (0);
}
