//Write a program to accept a number and print the number in character, decimal, octal and hex formats.
#include <stdio.h>
void main()
{
    int num1;
    printf("Enter the Value:",num1);
    scanf("%d",&num1);
    
    printf("Decimal:- %d\n",num1);
    printf("Octal:-%o\n",num1);
    printf("Hexa:- %x\n",num1);
    printf("Character:- %d",num1);

}