#include<stdio.h>
void main()
{
int n,i,c=0;
clrscr();
scanf("%d",&n);
while(n)
{
n=n/10;
c++;
}
printf("%d",c);
getch();
}
