//Writw a c program to demonstrate linear array search by taking array size, elments and the searching element from the user.
#include <stdio.h>
int main()
{
int size,element,count=0;
printf("Enter size:");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++)
{
printf("Enter element in index: %d\n",i);
scanf("%d",&arr[i]);
}
printf("Enter element to be searched:");
scanf("%d",&element);
for(int i=0;i<size;i++)
{
if(arr[i]==element)
{
printf("Element found in index: %d",i);
count++;
break;
}
}
if(count==0)
{
printf("Element not found");
}
}
