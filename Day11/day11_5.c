// Structure basic declaration
// user defined data type

#include<stdio.h>
#include<string.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student s1 = {1,"Abc",75.0f};
    // variable initialization

   printf("Roll no = %d\n",s1.roll_no);
   printf("Name = %s\n",s1.name);
   printf("Maarks = %.2f\n",s1.marks);

   struct student s2;
   s2.roll_no = 2;
   strcpy(s2.name,"Xyz");
   s2.marks = 80.0f;

   printf("\n Student 2: \n");

   printf("Roll no = %d\n",s2.roll_no);
   printf("Name = %s\n",s2.name);
   printf("Maarks = %.2f\n",s2.marks);


  
    return 0;
}