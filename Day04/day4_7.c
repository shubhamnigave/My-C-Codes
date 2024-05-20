/*Write a Program on Switch case*/

#include<stdio.h>
void main()
{
    int num1,num2;
    int choice;
    printf("Enter the values:\n");
    scanf("%d%d",&num1,&num2);
    printf("\nSelect the Choice: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:printf("Addition=%d\n", num1 + num2 );
        break;
    case 2:printf("Subtraction=%d\n", num1 - num2);
        break;
    case 3:printf("Multiplication=%d\n", num1 * num2);
        break;    
    case 4:printf("Division=%d\n", num1 / num2);
        break;
    
    default:printf("Enter the valid choice");
        break;
    }




}