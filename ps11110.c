#include<stdio.h>
void main()
{
int i,j,a[100],n,sum=0,sum1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
for(j=0;j<n;j++)
{
sum1=sum+a[j];
printf("%d",sum1);
}
getch();
}
