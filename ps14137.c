#include<stdio.h>

int main() {
   int n,i,b1=0,r=0,b=1,t=0,c=0;
   scanf("%d",&n);
   while(n)
   {
       r=n%2;
       b1=b1+(b*r);
       b=b*10;
       n=n/2;
   }
  while(b1)
  {
      t=b1%10;
      if(t==1)
      {
          c++;
      }
      b1=b1/10;
  }
  printf("%d",c);
    return 0;
}
