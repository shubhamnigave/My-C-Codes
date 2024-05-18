// short hand ops : += -= *= /= %=

#include<stdio.h>
void main()
{
    int num1=24, num2=14;
    printf("Num1=%d , Num2=%d\n",num1,num2);
    // 1) Try short hand op +=
    num1+=num2;
    printf("After Addition:\n");
    printf("num1 = %d  num2 = %d\n\n", num1, num2);
    // 1) Try short hand op -=
    num1-=num2;
    printf("After Subtraction:\n");
    printf("num1 = %d  num2 = %d\n\n", num1, num2);
    // 1) Try short hand op *=
    num1*=num2;
    printf("After Multiplication:\n");
    printf("num1 = %d  num2 = %d\n\n", num1, num2);
    // 1) Try short hand op /=
    num1/=num2;
    printf("After Division:\n");
    printf("num1 = %d  num2 = %d\n\n", num1, num2);
    // 1) Try short hand op %=
    num1%=num2;
    printf("After Modulus:\n");
    printf("num1 = %d  num2 = %d\n\n", num1, num2);
}