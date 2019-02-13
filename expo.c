#include<stdio.h>
void main()
{
int n,k,i,c=1;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<=k;i++)
{
c=c*n;
}
printf("%d",c);
getch();
}
