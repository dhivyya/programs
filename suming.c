#include<stdio.h>
void main()
{
int n,a,s=0;
scanf("%d",&n);
while(a)
{
n=a%10;
s=s+n;
a=a/10;
}
printf("%d",s);
getch();
}
