#include "main.h"
#include <stdio.h>
/**
 *prints_times_table - prints the times table the input from 0
 *
 * @n: the value of times table to be printed
 * Return: nothing or void
 */
void print_times_table(int n)
{int counter;

for (counter = 0; counter <= 10; counter++)
{
printf ("%d * %d = %d\n",n, counter, n*counter)
}
if (n > 15 || n < 0)
{
continue;
}

}
