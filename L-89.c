//Write a program in c to create a file.
#include <stdio.h>
int main()
{
    FILE *fp;
    fp= fopen("sample.txt","r");
    if(fp!=NULL)
    {
        printf("FILE OPENED!");
    }
    else
    {
        printf("FILE NOT FOUND!");
    }
}