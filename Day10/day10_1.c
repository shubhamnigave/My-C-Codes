// pointer notation in 2-D arrays

#include<stdio.h>

int main()
{
    int arr[3][3] = {11,22,33,44,55,66,77,88,99};

    for(int i =0;i<3;i++) // row
    {
        for(int j =0;j<3;j++) // col
        {
         //   printf("%4d",arr[i][j]); // array notation
            printf("%4d",*(*(arr+i)+j)); // pointer notation
        }
        printf("\n");
    }   
    return 0;
}