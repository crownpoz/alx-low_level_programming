#include "main.h"

/**
 *print_rev - prints a string in reverse order
 *@s: a pointer to an integer that will be changed
 *
 *Return: void which means our code is correct
 */

void print_rev(char *s)
{
int c;

c = 0;
while (s[c] != '\0')
{
c++;
}

for (c = c - 1 ; c >= 0; c--)
{
_putchar (s[c]);
}

_putchar ('\n');
}
