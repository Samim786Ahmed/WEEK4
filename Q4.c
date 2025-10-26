#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="samim";
    char string2[]="ahmed";
    int result=strcmp(string1,string2);
    if (result == 0)
        printf("Strings are equal & result=%d\n",result);
    else if (result < 0)
        printf("First string is smaller & result=%d\n",result);
    else
        printf("First string is greater & result=%d\n",result);
    return 0;
}