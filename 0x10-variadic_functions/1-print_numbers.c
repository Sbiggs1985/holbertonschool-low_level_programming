#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string
 * @n: The number
 * @...: The ellipsis
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valor;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(valor, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_a rg(valor, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(valor);
}
