#include <stdio.h>
void main() 
{
int n,i;
scanf("%d",&n);
int f=1;
for(i=2;i<n/2;i++)
{

    if(n%i==0)
    {
       f=0;
    }
    else
    {
       f=1;
    }
}
if(f==1)
{
    printf("prime");
}
else
{
    printf("not prime");
}
}
