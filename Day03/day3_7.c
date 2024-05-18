// relational ops : < <= > >= != ==
// return either 0(false) or 1(true) 

#include <stdio.h>
void main()
{
    int num1,num2;
    printf("Enter the Values:\n");
    scanf("%d%d",&num1,&num2);
    // Greater than
    printf("%d > %d ? %d\n",num1 > num2);
    printf("%d <= %d ? %d\n",num1 <= num2);
    printf("%d > %d ? %d\n",num1 > num2);
    printf("%d >= %d ? %d\n",num1 >= num2);
    printf("%d != %d ? %d\n",num1 != num2);

}