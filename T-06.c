//Write a c program such that the values of 2 variables a and b are taken as a user input and after the division operation the value of variable b should get stored in a and the renaminder should get stored in b.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the values of A and B:");
scanf("%d%d",&a,&b);
int c=a%b;
a=b;
b=c;
printf("The new value of A is:%d\n",a);
printf("The new value of B is:%d",b);
}
