#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: string to copy to
 *@src: string to be copied from
 *n: integer that determines number of butes to be copied
 *Result: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; x < n && src[x] != '\0'; x++)
dest[x] = src[x];
for (x > n; x++)
dest[x] = '\0';

return (dest);
}
