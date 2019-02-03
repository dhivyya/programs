#include<stdio.h>
void main()
{
char a[10];
int c=0,i;
clrscr();
gets(a);
for(i=0;a[i]!=NULL;i++)
{
c++;
}
for(i=0;i<c;i++)
{
if(c%2==0)
{
a[c/2]=='*';
a[c/2]-1=='*';
}
else
a[c/2]=='*';
}
printf("%s",a);
getch();
}
