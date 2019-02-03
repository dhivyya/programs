#include<stdio.h>
void main()
{
char a[10];
int i,l=0;
gets(a);
for(i=0;a[i]!=NULL;i++)
{
l++;
}
for(i=0;i<l;i++)
{
if(a[i]%2!=0)
printf("%d",a[i]);
}
getch();
}
