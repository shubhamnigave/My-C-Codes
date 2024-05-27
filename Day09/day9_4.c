//string function simulation
#include<stdio.h>

void my_strcpy(char dest[],char src[]);
int main()
{
    char src[] = "Sunbeam";
    char dest[50];
    my_strcpy(dest,src);

    printf("DEstination String = %s\n",dest);

    return 0;
}

void my_strcpy(char dest[],char src[])
{
    int i =0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}