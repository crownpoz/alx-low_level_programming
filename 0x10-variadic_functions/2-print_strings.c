#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints the strings
 *@n: number of strings in a function
 *@separator:string printed between strings
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int j;
	char *words;

	va_start(arg, n);
	for (j = 0; j < n; j++)
	{
		words = va_arg(arg, char*);
		if (words != NULL)
			printf("%s", words);
		else
			printf("%p", words);
		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
