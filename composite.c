#include<stdio.h>
void main()
{
int a,i,f=0;
clrscr();
scanf("%d",&a);
for(i=2;i<a/2;i++)
{
if(a%i==0)
f=1;
}
if(f==1)
printf("yes");
else
printf("no");
getch();
}
