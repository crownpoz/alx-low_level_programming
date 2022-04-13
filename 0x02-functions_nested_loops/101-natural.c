#include <stdio.h>
/**
 * main - lists natural numbers mutiple of 3 and 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
int i, sum=0;

for (i = 0; i < 1023; i++)
{
if ((i % 3) == 0 || (i % 5))
sum += i;
}
printf("%d/n", sum);

return (0);
}
