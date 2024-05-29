// macros # : used to convert the variable into string
#include<stdio.h>
#define multiply(a,b) printf(#a "*" #b "=%d",a*b)

int main()
{
    int n1 = 10,n2 = 5;

    multiply(n1,n2);
  //  printf(#a "*" #b "=%d",a * b);
  // printf("n1" "*" "n2" "=%d",n1 * n2);
  //  n1 * n2 = 50

    return 0;
}