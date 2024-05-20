// Program on Enum : user defined data type

#include <stdio.h>
enum year {jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
void main()
{
  enum year month; 
  //enum year = datatype
  //month is variable
  printf("size of enum month = %d\n",sizeof(month));
  printf("enter the month :");
  scanf("%d",&month);
  switch(month)
    {
        case jan:
        case mar:
        case may:
        case jul:
        case aug:
        case oct:
        case dec:
                printf("This month has 31 days !\n");
                break;
        case feb:
                printf("This month has 28/29 days !\n");
                break;
        case apr:case jun:case sep:case nov:
                printf("This month has 30 days !\n");
                break;
        
    }
}