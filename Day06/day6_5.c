// pointers

#include<stdio.h>

int main()
{
    int num1 = 10;
    int *ptr = &num1; // referencing
    // ptr is an int pointer variable holding address of num1

    printf("num1 = %d\n",num1); // 10

    printf("Address of num1 = %u\n",&num1); // 100
    printf("ptr = %u\n",ptr); // 100

    printf("value of num1 using ptr = %d\n",*ptr);// (dereferencing) 10 
    /*
    *ptr = 10
    value at ptr
    value at 100
    10
    */


   char ch = 'A';
   char *c_ptr = &ch;

   printf("ch = %c\n",ch); // A
   printf("ch using c_ptr = %c\n",*c_ptr); // A
   printf("address of ch = %u\n",&ch); // 200
   printf("address of ch using c_ptr = %u\n",c_ptr); // 200
    
    
    
    return 0;
}