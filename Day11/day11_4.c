// Preprocessor directives __LINE__, __DATE__, __TIME__, __FILE__, #line

#include<stdio.h>

int main()
{
    printf("Current Line = %d\n",__LINE__);
    printf("Todays Date = %s\n",__DATE__);
    printf("current time = %s\n",__TIME__);
    printf("Current File = %s\n",__FILE__);

    return 0;
}