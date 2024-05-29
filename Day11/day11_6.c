// Scanf in structure
#include<stdio.h>

struct employee
{
    int emp_id;
    char name[20];
    float salary;
};

int main()
{
    struct employee e1;

    printf("enter the employee Details :\n");
    printf("enter the emp id:");
    scanf("%d",&e1.emp_id);

    printf("enter the name :");
    scanf("%s",&e1.name);

    printf("enter the salary :");
    scanf("%f",&e1.salary);

    printf("\n Employee Details :\n");

    printf("Emp id = %d \nName = %s\n salary = %.2f\n",e1.emp_id,e1.name,e1.salary);
    return 0;
}