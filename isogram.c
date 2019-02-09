#include<stdio.h>
void main()
{
char a[20];
int n,i,f=0;
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==a[i+1])
{
f=1;
break;
}
}
if(f==0)
printf("isogram");
else
printf("not an isogram");
getch();
}
