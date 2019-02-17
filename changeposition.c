#include<stdio.h>
#include<stdio.h>
void main()
{
char a[100];
int i,t,l;
gets(a);
for(i=0;a[i]!=NULL;i++)
{
l++;
}
if(l%2==0)
{
for(i=0;i<l;i+=2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("%s",a);
}
else
{
for(i=0;i<l+1;i+=2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("%s",a);
}
getch();
}
