// ## : used to concat to strings and combine them into 1 string
#include<stdio.h>
#define print(a,b) printf("%d",a##b)
int main()
{
    int basic,sal;

    int basicsal = 10000;
    print(basic,sal);
    // printf("%d",a##b)
 // printf("%d",basicsal);
    return 0;
}