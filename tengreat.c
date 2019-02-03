#include<stdio.h>
void main()
{
int a[10],m,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<n;i++)
{
if(a[i]>m)
{
a[i]=m;
}
}
printf("%d",m);
getch();
}
