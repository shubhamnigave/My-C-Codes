//printf scanf returntype and count also
#include<stdio.h>
void main()
{

    int count = printf("Good Morning Everyone!");
    printf("count=%d\n",count);

    int num =123456;
    count = printf("num=%d\n",num);
    printf("num=%d\n",count);
    int num1,num2,num3;
    printf("Enter the Value of 3 Values:-\n");
    count= scanf("%d%d%d",&num1,&num2,&num3);
    printf("num1=%d num2=%d num3=%d\n",num1,num2,num3);
    printf("Count of Scans=%d\n",count);
}