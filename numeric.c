#include<stdio.h>
void main()
{
char a[10];
int i,n=0;
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
printf("%d",a[i]);
}
}
getch();
}
