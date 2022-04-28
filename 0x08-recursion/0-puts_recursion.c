#include "main.h"
/**
 * _puts_recursion - prints a character followed by a new line
 *@s: string
 *Return: Always 0(success)
 *
 */
void _puts_recursion(char *s);
{
if(*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(**s);
}
}
