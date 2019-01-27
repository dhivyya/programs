#include<stdio.h>
void main()
{
char a[100];
int i,c=0;
scanf("%s",&a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]=='')
{
c++;
}
}
c=c+1;
printf("%d",c);
}
