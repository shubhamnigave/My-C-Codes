// Program for anonymous enum
#include<stdio.h>
void main()
{
    enum {HR,Sales,CRM}d1;
    // anonymous enum
    // d1 is the variable of anonymous enum    
    typedef enum {HR_d,Sales_d,CRM_d}dept;
    dept d1;
    //d1 is variable
    enum departement { HRdept, Salesdept, CRMdept }dept;
    //dept is variable
}
