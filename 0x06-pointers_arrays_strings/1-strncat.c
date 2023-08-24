#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 *
 * @n: num of element to concatenate
 * @src: string source
 * @dest: string destination
 *
 * Return: destination and result
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);

}
