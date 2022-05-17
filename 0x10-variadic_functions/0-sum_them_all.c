#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - gives the sum of all its parameters
 *@sum: sum of all its parameters
 *@n: n arguments
 *Return: sum or if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	if (n)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
	}
	return (sum);
}
