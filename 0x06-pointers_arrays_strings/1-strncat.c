#include "main.h"

/**
 *_srtncat - concatenates two strings
 *@dest: pointer to the destination input
 *@src: pointer to the source input
 *@n: number of bytes from @src
 *
 *Return: dest
 */
  
char *_strncat(char *dest, char *src, int n)
{

int i = 0, c = 0;

while (dest[c] != '\0')
c++;

while ( src[i] != '\0' && n > c)
{
dest[c] = src[i];
c++;
i++;
}
if (n > 0)
{
dest[c] = '\0';
}

return (dest);
}
return (dest);
}
