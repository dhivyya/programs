#include <stdio.h>
int main()
{
int i, n,first=0,next=1,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=first+next;
first=next;
next=sum;
}
return 0;
}
