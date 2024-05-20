//Program for Conditional statements : If-else (user Entered Values)

#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter the Numbers:\n");
    scanf("%d%d",&num1,&num2);

    if (num1 > num2)
    printf("Number one is Greater !\n");
    else
    {
        printf("Number Two is Greater");
    }
}