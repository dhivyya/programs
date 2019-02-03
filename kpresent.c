#include<stdio.h>
void main()
{
int n,k,c,i;
int a[10];
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
c=1;
}
}
if(c=1)
printf("present");
else
printf("no");
getch();
}
