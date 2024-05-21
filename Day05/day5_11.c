// Functions : with parameters, without returntype

#include<stdio.h>
//function declaration
void addition(int,int,int);
int main()

{
    //function call
    addition(10,20,30);
    addition(22,10,35);
    addition(15,12,13);
    return 0;

    
}
    //This is Function Defination
    void addition(int num1,int num2,int num3)
{
    int sum = num1+num2+num3;
    printf("Sum = %d\n",sum);
}