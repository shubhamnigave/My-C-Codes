// char 2-D array : printing in array and pointer notation ,  and size

#include<stdio.h>

int main()
{
    char str1[] = "Sunbeam";

    char departments[][50] = {"HR","Training","Sales","Marketing"};

     printf("departments[2] = %s\n",departments[3]);
     printf("departments[3][4] = %c\n",departments[3][6]);
     printf("*(*(departments+3)+4) = %c\n",*(*(departments+3)+6));

    // printf("size of entire 2-D array = %d\n",sizeof(departments)); // 200
    // printf("size of 1 row = %d\n",sizeof(departments[3])); // 50
    // printf("size of 1 column = %d\n",sizeof(departments[2][4])); // 1

    return 0;
}