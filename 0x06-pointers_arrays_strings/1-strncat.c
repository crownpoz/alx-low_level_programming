#include "main.h"

/**
 *_srtncat - like _strcat but it will use n bytes from src
 *@dest: string to be concatenated
 *@src: string to be concatenated until n limit
 *@n: number of bytes that will be used from src
 *
 *Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;
while (dest[c] != '\0')
{
c++;
}
i = 0;
while (src[i] != '\0' && n > 0)
{
i++;
n--;
c++;
dest[c] = src[i];
}

return (dest);

_putchar ('\n');
}
