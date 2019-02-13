#include<stdio.h>
void main()
{
int n,i;
clrscr();
scanf("%d",&n);
while(n)
{
if(n%2==0)
{
n=n/2;
printf("%d",n);
}
else
printf("%d",n);
getch();
}
