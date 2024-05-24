// Program Scanf with array and pointer notation

#include <stdio.h>
int main()
{

    // CODE - 1 //
    /*int num1=100;
    char *ptr=&num1;
    ptr++;                          //Output= 100,100
    printf("Num1=%d\n",num1);
    printf("*ptr= %d\n",*ptr);*/

    // CODE - 2 //

    int arr[5] = {11, 22, 33, 44, 55};
    printf("arr[3] = %d\n",arr[3]);      //Value at arr[3]
    printf("*(arr+3) = %d\n",*(arr+3));  //Value of pointer at array[3]
    printf("*arr+3 = %d\n",*arr+3);      //0th index is 11+3=14

/*// Program for Array notation and pointer notation

#include<stdio.h>
void main()
{
    int arr [5];
    printf("Enter the array Values:- \n");
    for(int i=0;i<=5;i++)
    {
        printf("arr(%d)=",i);
        scanf("%d",&arr[i]);
    }





}*/

    return 0;
}