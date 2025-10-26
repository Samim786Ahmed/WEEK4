#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="samim";
    char string2[]=" ahmed";
    strcat(string1,string2);
    printf("string after append->%s",string1);
}