// static variable declaration
#include<stdio.h>
void fun();
int main()
{
    fun();
    fun();
    fun();

    return 0;
}

void fun()
{
    static int num1;
    num1 = 10;
    printf("num1 = %d\n",num1);
    num1++;
}