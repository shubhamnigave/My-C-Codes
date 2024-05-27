//2-D array initialization and printing

#include<stdio.h>

int main()
{
    int arr1[3][3] = {11,22,33,44,55,66,77,88,99};

    int arr2[3][2] = {1,2,3,4};

    int arr3[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

    int arr4[3][3] = {{11,22},{33,44,55},{66}};

   // int arr5[][]; // error

   int arr5[][3] = {1,2,3,4,5,6,7};

   // int arr6[3][] = {1,2,3,4}; // not allowed : error
    
    
    for(int i =0;i<3;i++) // rows
    {
        for(int j = 0;j<3;j++)
        {
            printf("%4d",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;   
}