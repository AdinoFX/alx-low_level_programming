#include "main.h"
/**
 * swap_int - This program swaps the value
 * of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: nth
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
