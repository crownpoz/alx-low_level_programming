#include "main.h"
/**
 *strncat - function that concatenates two strings
 *@dest: pointer to the destination string
 *@src: pointer to the source string
 *n: most number of bytes from @src
 *
 *Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
int c, i;
c = 0;
while (dest[c])
c++;
for (i = 0; i < 0 && src[i] != '\0'; i++)
dest[c + i] = src[i];
dest[c + i] = '\0';

return (dest);
}
