#include "main.h"
/**
 * _isdigit - checks number between 0 to 9
 * @c: input number
 * Return: 1 if its a number between (0 to 9), and 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}

}

