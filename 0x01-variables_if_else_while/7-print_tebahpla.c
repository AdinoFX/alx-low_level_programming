#include <stdio.h>
/**
 * main -print alphabet in reverse mode
 *
 * return: (0)
 *
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
