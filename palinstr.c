#include<stdio.h>
void main()
{
char a[10],b[10];
int n,c=0,i,l=0;
clrscr();
gets(a);
for(i=0;a[i]!=NULL;i++)
{
c++;
}
for(i=c-1;i>0;i--)
{
b[j]=a[i];
j++;
}
for(i=0;i<c;i++)
{
if(b[i]==a[i])
l++;
}
if(c==l)
printf("yes");
else  
printf("no");
getch();
}
