#include <stdio.h>

void modif_my_char_var(char *cc, char ccc)
{
printf("Value of 'cc': %s\n", cc);
printf("Address of 'cc': %p\n", &cc);
printf("Value of 'ccc': %d\n", ccc);
printf("Address of 'ccc',: %p\n",&ccc);
}

int main(void)
{
char c;
char *p;

p = &c;
c = 'H';
printf("Value of 'c' before the call: %d\n", c);
printf("Address of 'c': %p\n", &c);
printf("Value of 'p': %s\n",p);
printf("Address of 'p': %p\n", &p);
modif_my_char_var(p, c);
printf("Value of 'c' after the call: %c\n", c);
return (0);
}
