#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0)
 *
 */
int main()
{
		int n = 50;
		int fibonacci[50];
		fibonacci[0] = 1;
		fibonacci[1] = 2;

		for (int i = 2; i < n; i++)
		{
				fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		}

		for (int i = 0; i < n; i++)
		{
				printf("%d", fibonacci[i]);
				if (i != n - 1)
				{
						printf(", ");
				}
				if ((i + 1) % 10 == 0)
				{
						printf("\n");
				}
		}

		return 0;
}
