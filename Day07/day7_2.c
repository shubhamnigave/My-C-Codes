//Write a program to swap two values by reference

#include<stdio.h>
void swap(int *ptr1,int *ptr2);
int main()
{
    int num1= 15, num2= 20;
    printf("Before Swap: num1 = %d num2 = %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After Swap: num1 = %d & num2 = %d\n",num1,num2);    
    return 0;

}
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}
