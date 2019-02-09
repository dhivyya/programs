#include<stdio.h>
void main()
{
int a,b,i;
char z[10];
for(i=0;i<4;i++)
{
scanf("%d%d",&a,&b);
scanf("%c",'z');
if(z=='/')
{
printf("%d",a/b);
}
else
printf("%d",a%b);
}
getch();
}
