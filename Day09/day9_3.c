//Predefined string functions : strcpy, strchr,strstr, strrev

#include<stdio.h>
#include<string.h>

int main()
{
    char src[] = "Indian";
    char dest[50];

    strcpy(dest,src); // string copy
    printf("Destination = %s\n",dest);

    char ch = 'a';    // String char Search
    char *ptr = strchr(src,ch);

    if(ptr == NULL)
        printf("Char not found !\n");
    else
        printf("Char found at index = %d\n",ptr - src);

    char str2[] = "Ind";  // Searching string into string

    char *ptr2 = strstr(src,str2);
    if(ptr2 == NULL)
        printf("String not Found !\n");
    else
        printf("String found at index = %d\n",ptr2-src);


      printf("REversed String = %s\n",strrev(src));
    return 0;
}