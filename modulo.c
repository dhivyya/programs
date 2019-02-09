#include<stdio.h>
void main()
{
int a,b,c,m;
clrscr();
scanf("%d%d%d",&a,&b,&c);
m=((a*b)%c);
printf("%d",m);
getch();
}
