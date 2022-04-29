#include "main.h"
/**
 *int factorial - returns the factorial of a given number
 *@n: integer to be returned
 *Return: recursion
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (0);
}
return (n * factorial(n - 1);
}
 
