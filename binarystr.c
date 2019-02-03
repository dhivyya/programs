#include<stdio.h>
void main()
{
char a[10];
int i,n,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a);
}
for(i=0;i<n;i++)
{
if(a[i]==0¦¦a[i]==1)
{
c=1;
}
}
if(c==1)
printf("yes");
else
printf("no");
getch();
}
