//Write a program in c to implement all the format specifiers used by c.
#include<stdio.h>
int main()
{
int a=10;
int task=30;
char name='A';
float b=10.6;
double c=121.67;
int *d=&task;
char nam[5]="Ahana";
long double f=456.6688;
short int d=1000;
printf("%d\n",a);
printf("%c\n",name);
printf("%e\n",b);
printf("%f\n",b);
printf("%hu\n",d);
printf("%i\n",a);
printf("%o\n",a);
printf("%s\n",nam);
printf("%u\n",a);
printf("%x\n",task);
printf("%d\n",*d);
printf("%If\n",c);
printf("%Lf\n",f);
printf("%%");
}
