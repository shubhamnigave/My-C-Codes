//Write a program for do while in switch case(User Entered Values)

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2;
    int choice;
    printf("Enter the values:-\n");
    scanf("%d%d",&num1,&num2);

    do{
        
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {  
        case 0 :
                exit(0);
        case 1: // addition
                printf("Addition = %d\n",num1+num2);
                break;
        case 2: // subtraction
                printf("Subtraction = %d\n",num1-num2);
                break;
        case 3: //Multiplication
                printf("Multiplication = %d\n",num1*num2);
                break;
        case 4: //Division
                printf("Division = %d\n",num1/num2);
                break;
        
        default:
                printf("Please enter the valid choice !\n");
                break;
    }
    }while(choice !=0);

    return 0;
    
    }
