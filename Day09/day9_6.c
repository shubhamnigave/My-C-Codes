// passing 2-D arrays to functions

#include<stdio.h>

void accept_data(int arr[3][2]);
void print_data(int arr[3][2]);

int main()
{
    int arr[3][2];
    accept_data(arr);
    print_data(arr);
    printf("size of arr in main() = %d\n",sizeof(arr));
    return 0;
}

void accept_data(int arr[3][2])
{
    printf("enter the data for the 2-D array :");

    for(int i =0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void print_data(int arr[3][2])
{
    printf("Data :\n");

    for(int i =0;i<3;i++)
    {
        for(int j =0;j<2;j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n size of arr in print_Data() = %d\n",sizeof(arr));
}