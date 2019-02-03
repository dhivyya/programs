#include<stdio.h>
void main()
{
char s[20];
int t=0,n=0,c=0,i;
clrscr();
scanf("%s",s);
for(i=0;s[i]!=NULL;i++)
{
c++;
}
for(i=0;i<c;i++)
{
if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
{
n=1;
}
}
for(i=0;i<c;i++)
{
if((s[i]>='1'&&s[i]<='9')
{
t=1;
}
}
r=n+t;
if(r==2)
printf("yes");
else
printf("no");
getch();
}
