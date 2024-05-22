// static variable
#include<stdio.h>

void fun();
int main()
{
    fun();
    fun();
    fun();
    fun();
    return 0;
}

static int num2;

void fun()
{
    static int num1 = 10;
    printf("num1 = %d\n",num1); 
    num1++;
}

/*
void fun()
{
    int num1 = 10;
    printf("num1 = %d\n",num1); // 10 10 10 10
    num1++;
}
*/