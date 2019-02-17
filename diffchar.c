#include<stdio.h>
void main()
{
char a[100],b[100];
int n=0,i,st1,st2;
gets(a);
gets(b);
for(i=0;a[i]!=NULL;i++)
{
st1++;
}
for(i=0;b[i]!=NULL;i++)
{
st2++;
}
if(st1==st2)
{
for(i=0;i<st1;i++)
{
if(a[i]==b[i])
{
n=n+0;
}
else
c=c+1;
}
if(c==1)
{
printf("yes");
}
else
printf("no");
}
else
printf("no");
getch();
}
