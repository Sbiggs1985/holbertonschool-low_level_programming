#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints
 * @format: list of all formats
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
		case 'c':
			printf("%s%sc", sep va_arg(list, int));
			break;
		case 'i':
			printf("%s%sd", sep, va_arg(list, int));
			break;
		case 'f':
			printf("%s%sf", sep va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default
			i++;
			continue;
		}
		sep = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(list);
}

