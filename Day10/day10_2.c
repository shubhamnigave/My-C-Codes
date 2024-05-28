// Printing data using array and pointer notation, &arr

#include<stdio.h>

int main()
{
    int arr[3][3] = {10,20,30,40,50,60,70,80,90};

    /*     
            10   20   30
            40   50   60
            70   80   90   
    */

   printf("%4d\n",arr[2][0]); // 70 
   printf("%4d\n",*(*(arr+2)+0));
   printf("%4d\n",**(arr+2));
   printf("arr = %u\n",arr);
   printf("arr+1 = %u\n",arr+1);
   printf("&arr+1 = %u\n",&arr+1);

/*

   printf("arr = %u\n",arr); // 100
   printf("&arr = %u\n",&arr); // 100

   printf("arr+1 = %u\n",arr+1); // 112
   printf("&arr+1 = %u\n",&arr+1); // 136

  */  
    return 0;
}