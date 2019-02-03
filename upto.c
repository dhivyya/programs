#include<stdio.h>
void main()
{
char a[10];
int i,n,k;
clrscr();
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%s",a);
}
for(i=0;i<k;i++)
{
printf("%c",a[i]);
}
getch();
}
