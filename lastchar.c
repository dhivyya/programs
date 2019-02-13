#include<stdio.h>
void main()
{
int i,l=0,n;
char a[100];
clrscr();
gets(a);
scanf("%d",&n);
for(i=0;a[i]!=NULL;i++)
{
l++;
}
for(i=l;i>=n;i--)
{
printf("%c",a[i]);
}
getch():
}
