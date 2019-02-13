#include<stdio.h>
void main()
{
int a,b,c,i,l=0;
clrscr();
scanf("%d%d",&a,&b);
while(b)
{
b=b/10;
l++;
}
for(i=0;i<c;i++)
{
a=a*10;
}
c=c+b;
printf("%d",c);
getch();
}
