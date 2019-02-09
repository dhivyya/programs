#include<stdio.h>
void main()
{
int a[10],n,i;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
if(i!=a[i])
{
printf("%d",i);
break;
}
}
getch();
}
