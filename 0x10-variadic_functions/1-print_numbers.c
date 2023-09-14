#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: size of parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i, num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i < (n - 1) && (*separator != NULL))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
