//Program for Nested if-else (User Entered Value)

#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter the Values:\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    //if Condition
    if (num1 > num2)
    {
        if (num1 > num3)
            printf("Number one is Greatest");
        else
            printf("Number Three is Greatest");
    }
    else if (num2 > num3)
    {
        printf("Number Two is Greatest");
    }
    else
    {
        printf("Number Three is Gretaest");
    }


}