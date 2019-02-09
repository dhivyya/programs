#include<stdio.h>
void main()
{
int n,k,a[20];
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i==k)
{
printf("%d",a[i]);
break;
}
}
getch();
}
