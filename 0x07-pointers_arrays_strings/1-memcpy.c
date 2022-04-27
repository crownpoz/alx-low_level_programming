#include "main.h"

/**
*_memcpy - copy memory area
*@dest: dest memory area
*@src: source memory area
*@n: bytes from memory to copy
*
*Return: memory area replaced
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a= 0;

while (n > 0)
{
dest[a] = src[a];
a++;
n--;
}

return (dest);
}
