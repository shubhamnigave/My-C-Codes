// Code on Width Specifier

#include <stdio.h>
void main()

{
    int num1=12345;
    printf("%9d\n",num1);  //9 width Specifier blank speces on left
    printf("%7d\n",num1);
    printf("%4d\n",num1);
    printf("%3d\n",num1);
    printf("%-10dHello\n",num1);
    float fvar = 12.41f;
    printf("%7.2f",fvar);

}