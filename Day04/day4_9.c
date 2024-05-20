//Write a program for Multiple switch cases

#include<stdio.h>
void main()
{
    int month;
    printf("Enter the Choice:\n");
    scanf("%d",&month);

    switch (month)
    {
    case 1  : 
    case 3  :
    case 5  :
    case 7  :
    case 8  :
    case 10 :
    case 12 : printf("This Month has 31 Days");
              break;
    case 4  :
    case 6  :
    case 9  :
    case 11 : printf("This Month has 30 Days");
              break;

    case 2  : printf("This Month has 28/29 Days");
              break;
    /*case 3 : printf("This Month has 31 Days");
        break; 
    case 4 : printf("This Month has 30 Days");
        break;
    case 5 : printf("This Month has 31 Days");
        break;
    case 6 : printf("This Month has 30 Days");
        break;             
    case 7 : printf("This Month has 31 Days");
        break;
    case 8 : printf("This Month has 31 Days");
        break;
    case 9 : printf("This Month has 30 Days");
        break;
    case 10 : printf("This Month has 31 Days");
        break;
    case 11 : printf("This Month has 30 Days");
        break;
    case 12 : printf("This Month has 31 Days");
        break;*/            
    default:  printf("Enter the Valid Value");
        break;
    }

}