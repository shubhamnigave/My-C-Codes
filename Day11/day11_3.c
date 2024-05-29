// pre-processor errors

#include<stdio.h>
#define PI 3.14

int main()
{
    #ifndef PI // if not defined PI
        #error "PI is not defined !"
    #else
        printf("PI is defined !\n");
    #endif

    return 0;
}