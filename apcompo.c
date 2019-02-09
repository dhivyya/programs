#include<stdio.h>
void main()
{
int a,n,i,c=0;
clrscr();
scanf("%d%d",&a,&n);
for(i=1;i<=n;i++)
{
if(a%i==0)
{
c++;
}
}
if(c>2)
{
printf("composite");
}
else
printf("not a composite number");
getch();
}
