// bitwise shift ops : <<, >>

#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter the Numbers:\n");
    scanf("%d%d",&num1,&num2);

    printf("num1 << num2 = %d\n",num1 << num2);
    printf("num1 << num2 = %d\n",num1 >> num2);

}