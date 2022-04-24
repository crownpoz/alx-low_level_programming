#include "main.h"

/**
 *_srtncat - concatenates two strings
 *@dest: pointer to the destination input
 *@src: pointer to the source input
 *@n: number of bytes from src
 *
 *Return: dest
 */
  
char *_strncat(char *dest, char *src, int n)
{
int c = 0, i = 0;

while (dest[c] != '\0')
c++;

while (n > i && src[i] != '\0')
{
dest[c] = src[i];
c++;
i++;
}
if (n > 0)
{
dest[i] = '\0';
}

return (dest);
}

return (dest);
}
