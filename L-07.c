//Write a program to convert the value of temperature from degree Celsius to degree Fahrenheit.
#include<stdio.h>
int main()
{
float c,f;
printf("Enter the temperature in Celsius :\n");
scanf("%f",&c);
f=(c*9/5)+32;
printf("%f\n",f);
}
