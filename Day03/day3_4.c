// operators : assignment, comma, comma with brackets

#include <stdio.h>
void main()

{
    int num1=10;
    printf("Num1= %d\n",num1); //default given value assigned

    int num2;
    num2=1,2,3;                //left most value assigned
    printf("Num2= %d\n",num2);

    int num3=(11,12,13);       //right most value assigned
    printf("Num3= %d",num3);
   
}