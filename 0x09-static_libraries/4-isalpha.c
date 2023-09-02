#include "main.h"
/**
 * _isalpha - return 1 if lower or upper
 *
 * Description: we are using _putchar
 *
 * @c: collect the character
 *
 * Return: 1 if lower or upper otherwise 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int alpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				alpha = 1;
			}
		}
	}
	return (alpha);
}
