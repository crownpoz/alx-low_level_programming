#include "main.h"
/**
 *string_toupper - converts string to uppercase
 *@s: string
 *Return: s
 */
char *string_toupper(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
{
if (s[a] > 96 && s[a] < 123)
{
s[a] -= 32;
}
}
return(s);

}
