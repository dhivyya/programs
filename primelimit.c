#include<stdio.h>
void main()
{
int a,b,f,i;
scanf("%d%d",&a,&b);
while(a<b)
{
f=0;
for(i=2;i<a/2;i++)
{
if(a%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("%d",a);
++a;
}
}
}
