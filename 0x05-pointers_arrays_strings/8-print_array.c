#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int x)
{
	int i;

	for (i = 0; i < x; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
