#include "main.h"
/**
 * print_sign - return 1 if +,returns 0 if 0, returns -1 if -
 *
 * @n: the int to print
 * Return: Always 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar (43);
return (1);
}

else if (n == 0)
{
_putchar (48);
return (0);
}

else
{
_putchar (45);
return (-1);
}

}
