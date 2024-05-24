//Program to show constants in C

#include<stdio.h>
void main()
{
    const float G = 9.08f;
    printf("G = %.3f\n",G);
    float *ptr = &G;
    *ptr = 2.15f;
    printf("G = %.2f\n",G);
}