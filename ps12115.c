#include<stdio.h>
void main()
{
int sum=0,a[10],b[10],c,i,j,k;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
b[j]=a[i];
j++;
}
else
{
a[i-1]=0;
}
}
for(c=0;c<j;j++)
{
printf("%c",a[c]);
}
getch();
}
