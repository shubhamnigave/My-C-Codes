//Program to show pointer to pointer
#include<stdio.h>
int main()
{
    int num1 = 20;
    int *ptr1 = &num1;
    int **ptr2 = &ptr1;
    int ***ptr3= &ptr2;

 
    printf("num1 = %d\n",num1); 
    printf("*ptr1 = %d\n",*ptr1); 
    printf("**ptr2 = %d\n",**ptr2); 
    printf("***ptr2 = %d\n",***ptr3); 



    return 0;    
}