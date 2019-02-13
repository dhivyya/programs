#include<stdio.h>
void mian()
{
int ,a[10]n,k,i;
scanf("%d%d",&n,k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
r=a[i];
j++;
}
if(j==k)
{
break;
}
}
printf("%d",r);
getch();
}
