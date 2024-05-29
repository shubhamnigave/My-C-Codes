// conditional macros
#include<stdio.h>
// #define PI 3.14

int main()
{

    #ifdef PI // if defined PI
        printf("PI is defined !\n");
    #else
        printf("PI is not defined !\n");
    #endif

    return 0;
}
