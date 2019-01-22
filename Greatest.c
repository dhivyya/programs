#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is greatest");
else if(b>a&&b>c)
printf("b is greatest");
else
printf("c is greatest");
}
