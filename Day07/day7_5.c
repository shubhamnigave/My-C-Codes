// function parameters internal execution

#include<stdio.h>

int main()
{
    int num1 = 10;
    int *ptr = &num1;

    
    printf("num1 = %d   ++*ptr = %d\n",num1,++(*ptr));

   
    return 0;
}