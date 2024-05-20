// Ternary ops : conditional op
// syntax : condition ? exp1(true) : exp2(false)

#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter the Numbers:\n");
    scanf("%d%d",&num1,&num2);

    num1 > num2 ? printf("Num1 is Greater\n"): printf("Num2 is Greater\n");

}