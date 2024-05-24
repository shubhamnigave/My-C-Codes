// Program for Array notation and pointer notation

#include<stdio.h>
void main()
{
    int arr [5];
    printf("Enter the array Values:- \n");
    for(int i=0;i<5;i++)
    {
        printf("arr[%d]=",i);
        //scanf("%d",&arr[i]);        Array Notaion
        scanf("%d",arr+i);          //Pointer Notation
    }
    printf("The Array Elements Are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%4d",arr[i]);
    }

}