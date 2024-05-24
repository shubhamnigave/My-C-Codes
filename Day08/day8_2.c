//Program on Array in Function

#include<stdio.h>
void get_data(int arr[5]);
void print_data(int arr[5]);
int main()
{
    int arr[5];
    get_data(arr);
    print_data(arr);
    printf("size of arr in main() = %d\n",sizeof(arr));
    return 0;
}

void get_data(int arr[5])
{
    printf("Enter the Values:\n");
    for(int i=0;i<5;i++)
    {
        printf("arr [%d] = ",i);
        scanf("%d",&arr[i]);
     }
}

void print_data(int arr[5])
{
    printf("Arrays are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%4d",arr[i]);

    }
    printf("\nsize of arr in print_data() = %d\n",sizeof(arr));
}