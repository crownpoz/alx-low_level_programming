#include "main.h"

/**
 *rev_string - prints a reverse string
 *@s: a pointer is an int that will be changed
 *
 *Return: void
 */

void rev_string(char *s)
{
char *start_d, *end_d, d;
int f, count;
int length = 0;

for (f = 0; s[f]; f++)
{
length++;
}

count = length;

start_d = s;
end_d = s;

for (f = 0; f < count - 1; f++)
{
end_d++;
}

for (f = 0; f < count / 2; f++)
{

d = *end_d;
*end_d = *start_d;
*start_d = d;

start_d++;
end_d--;
}
}
