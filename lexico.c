#include<stdio.h>
void main()
{
char a[50],b[50];
int i;
gets(a);
for(i=0;a[i]!=NULL;i++)
{
for(j=i+1;a[j]!=NULL;j++)
{
if(a[i]>a[j])
{
b[k]=a[i];
a[i]=a[j];
a[j]=b[k];
}
}
}
printf("%s",str);
getch();
}
