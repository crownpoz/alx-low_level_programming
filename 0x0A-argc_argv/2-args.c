#include <stdio.h>
/**
 *main - prints all arguments it receives
 *@argc: number of argumants
 *@argv: array of arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc ; argv++)
printf("%s\n", argv[i]);
return (0);
}
