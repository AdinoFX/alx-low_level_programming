#include "main.h"
/**
 * reverse_array - program that reverses the content
 * of an array of integers
 *
 * @n: integers
 * @a: array
 *
 * Return: return n
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
