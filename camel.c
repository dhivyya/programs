#include<stdio.h>
void main()
{
char a[100];
int l,i;
gets(a);
for(i=0;a[i]!=NULL;i++)
{
l++;
}
if(a[0]>91)
{
a[0]=a[0]-32;
}
for(i=0;i<l;i++)
{
if(a[i]=='')
{
if(a[i+1]>91)
{
a[i+1]=a[i+1]-32;
}
}
}
printf("%s",a);
getch();
}
