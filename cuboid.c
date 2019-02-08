#include<stdio.h>
void main()
{
int l,b,h,a,v;
clrscr();
scanf("%d%d%d",&l,&b,&h);
v=l*h*b;
a=(l*b)+(b*h)+(h*l);
printf("%d",v);
printf("%d",a);
getch();
}
