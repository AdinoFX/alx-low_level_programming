#include "main.h"
/**
 * _islower - detect lower case and upper case
 *
 * Description: use _putchar to print
 * @c: collect alphabets
 * Return: (1) if c is lower else (0)
 *
 */
int _islower(int c)
{
	int low_alpha = 0;
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
		{
			low_alpha = 1;
		}
	}
	return (low_alpha);
}
