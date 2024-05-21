#include <stdio.h>
int main(void)
{
int a,b,c;
a=111;
b=222;
c=printf("%d",a)+ ++b;
printf(" %d",c);
return 0;
}