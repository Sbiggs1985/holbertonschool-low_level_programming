#include "main.h"

/**
 * print_array - Entry Point
 * @a: get sstring
 * @n: get number
 * Return:
 */
void print_array(int *a, int n)
{
	int f1;

	for (f1 = 0; f1 < n; f1++)
	{
		if (f1 == 0)
		{
			printf("%d", a[f1]);
		}
		else
		{
		printf(", %d", a[f1]);
		}
	}
	printf("\n");
}
