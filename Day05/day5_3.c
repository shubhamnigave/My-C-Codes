// Program for nested for loop

#include<stdio.h>

int main()
{

    // outer loop for rows
    for(int i = 1;i<=5; i++)
    {
        // inner loop for columns
        for(int j = 1;j<=i;j++)
        {
            printf("%4d",j);
        }
        printf("\n");
    }
    return 0;
}