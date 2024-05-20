/*Write a Program on Switch case for Character*/

#include<stdio.h>
void main()
{
    int num1,num2;
    char choice;
    printf("Enter the values:\n");
    scanf("%d%d",&num1,&num2);
    printf("+\n-\n*\n/\n\nThe choice is:-");
    scanf("%*c%c",&choice);

    switch (choice)
    {
    case '+' : printf("Addition=%d\n", num1 + num2 );
               break;
    case '-' : printf("Subtraction=%d\n", num1 - num2);
               break;
    case '*' : printf("Multiplication=%d\n", num1 * num2);
               break;    
    case '/' : printf("Division=%d\n", num1 / num2);
               break;
    
    default  : printf("Enter the valid choice");
               break;
    }




}