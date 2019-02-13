#include<stdio.h>
void main()
{
char a[100];
int i,c=0;
clrscr();
gets(a);
for(i=0;a[i]!=NULL;i++)
{
c++;
}
for(i=0;i<c;i++)
{
a[0]=a[0]-32;
if(a[i]=" ")
{
a[i]=a[i]-32;
}
}
for(i=0;i<c;i++)
{
printf("%s",a);
}
getch();
}
