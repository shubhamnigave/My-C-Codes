// recursion : function calling itself
// power
#include<stdio.h>

int my_power(int base,int index);
int main()
{
    int base = 2, index = 5;
    int result = my_power(base,index);
    printf("Result = %d\n",result);
    return 0;
}

int my_power(int base,int index)
{
    if(index == 0)
        return 1;
    
    return base * my_power(base,index-1);
}