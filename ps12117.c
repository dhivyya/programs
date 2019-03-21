#include<stdio.h>
void main()
{
int i,n,j;
char a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
for(j=n;j>=0;j--)
{
printf("%c",a[j]);
printf("-");
}
getch();
}
