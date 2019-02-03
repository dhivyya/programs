#include<stdio.h>
void main()
{
int n;
clrscr();
scanf("%d",&n);
while(n)
{
if(n%10==0)
{
printf("%d",n);
break;
}
n++;
}
getch();
}
