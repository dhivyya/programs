#include<stdio.h>
void main()
{
int n,i,k,c=0,a[10];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(i==k)
{
c++;
}
}
printf("%d",c);
getch();
}
