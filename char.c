#include<stdio.h>
void main()
{
char a[100];
int i,c=0,l=0,d;
scanf("%s",&a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]=='')
{
c++;
}
}
for(i=0;a[i]!=NULL;i++)
{
l++;
}
d=l-c;
printf("%d",d);
}
