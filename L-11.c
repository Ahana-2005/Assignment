//Write a program in c to make your own currency converter.
#include<stdio.h>
int main()
{
float rupees;
printf("Enter the amount in Rupees:\n");
scanf("%f",&rupees);
printf("Amount in Dollars:%f\n",rupees*0.012);
printf("Amount in Euros:%f\n",rupees*0.011);
printf("Amount in Yans:%f\n",rupees*1.77);
printf("Amount in Rubels:%f\n",rupees*1.16);
}
