#include "main.h"
/**
 *_strlen_recursion - prints length of a string
 *@s: string
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
int x;

x = 0;
if (*s == '\0')
return (0);
x = 1 + _strlen_recursion(x + 1);

return (x);
}
