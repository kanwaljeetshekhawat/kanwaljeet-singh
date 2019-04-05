/* Write a program to print sum of the following series:

      1 3 5 7 9 11......

      up to n numbers taking only an integer n as input. */

#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter the number=\t");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
sum = sum + i;
} 
}
printf("sum of the numbers is= %d\n" , sum);
}
