//Write a c program to multiply two 2-D array.
#include <stdio.h>
int main()
{
int r,c,i, j, k;
int a[100][100],b[100][100],pro[100][100];
printf("Enter the number of rows: ");
scanf("%d", &r);
printf("Enter the number of columns: ");
scanf("%d", &c);
printf("Enter elements of the first matrix:\n");
for (i = 0; i < r; i++) 
{
for (j = 0; j < c; j++) 
{
printf("Enter the element in row-%d and column-%d :",i,j);
scanf("%d", &a[i][j]);
}
}
printf("Enter elements of the second 2x2 matrix:\n");
for (i = 0; i < r; i++) 
{
for (j = 0; j < c; j++) 
{
printf("Enter the element in row-%d and column-%d :",i,j);
scanf("%d", &b[i][j]);
}
}
for (i = 0; i < r; i++) 
{
for (j = 0; j < c; j++) 
{
pro[i][j] = 0;
for (k = 0; k < 2; k++) 
{
pro[i][j] += a[i][k] * b[k][j];
}
}
}
printf("Result of matrix multiplication:\n");
for (i = 0; i < r; i++) 
{
for (j = 0; j < c; j++) 
{
printf("%d ", pro[i][j]);
}
printf("\n");
}
}
