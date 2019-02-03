#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d",&a,&b);
c=abs(a-b);
if(c%2==0)
printf("even");
else 
printf("odd");
getch();
}
