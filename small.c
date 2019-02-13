#include<stdio.h>
void main()
{
int n,a[10],k,i,j=0,min;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
min=a[0];
for(i=0;i<k;i++)
{
if(a[i]<min)
{
min=a[i];
j++;
}
}
if(j==k)
{
break;
}
printf("%d",min);
getch();
}
