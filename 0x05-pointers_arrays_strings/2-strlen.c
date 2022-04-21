#include "main"

/**
 *_strlen -length of a string
 *@s: a pointer to an int that will be changed/uploaded
 *
 *Return: void that means the answer is correct
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
