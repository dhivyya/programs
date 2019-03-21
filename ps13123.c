#include <stdio.h>
void main()
{
int num,i,j,f=0;
scanf("%d",&num);
for(i=2;i<=num;i++)
{   
    f=0;
  for(j=2;j<=i/2;j++)
  {
    if(i%j==0)
      f=1;  
  }
    if(f==0 && num%i==0)
     printf("%d ",i);
}
}
