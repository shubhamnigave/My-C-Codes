#include <stdio.h>
void main()
{
    int num1;
    int num2= 15;
    printf("Given Number:%d\n",num2);
    printf("Enter the Number you want to add: ");
    scanf("%d",&num1); //& is the address of the num1 where it will be stored at runtime
    printf("Sum of Numbers=%d\n",num1+num2);

}