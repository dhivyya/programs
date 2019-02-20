#include <stdio.h>

int main()
{
 int a,sq,sum=0,r;
 scanf("%d",&a);
 while(a)
 {
     r=a%10;
 sq=r*r;
 sum=sum+sq;
 a=a/10;
 }
 printf("%d",sum);


    return 0;
}
