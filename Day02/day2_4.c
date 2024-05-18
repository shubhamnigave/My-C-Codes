//to supress the Enter key we use %*c 
#include<stdio.h>
void main()
{
    int num1,num2;
    char ch1;
    printf("Enter the Values of num1 and num2: ");
    scanf("%d%d",&num1,&num2);
    printf("Enter the Value of Character: ");
    scanf("%*c%c",&ch1);

    printf("num1=%d\nnum2=%d\n",num1,num2);
    printf("ch1=%c",ch1);


}