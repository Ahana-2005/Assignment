//Write a program in c to take 2 inputs from user and perform all the mathematical operations.The 2 inputs should be passed as an argument to a user defined function named operation.
#include<stdio.h>
int operation(int a,int b)
{
int c=a+b;
int d=a-b;
int e=a*b;
int f=b/a;
printf("Addition=%d\n",c);
printf("Substraction=%d\n",d);
printf("Multiplication=%d\n",e);
printf("Division=%d\n",f);
}
int main()
{
int a=0,b=0;
printf("Enter A and B:");
scanf("%d %d",&a,&b);
operation(a,b);
}
