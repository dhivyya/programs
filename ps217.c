#include <stdio.h>

int main()
{
   int l,r,n,length,i;
   scanf("%d%d",&l,&r);
   if(l>r)
   {
       length=l;
   }
   else
   length=r;
   for(i=2;i<=length;i++)
   {
     if((i%l==0)&&(i%r==0))
     {
         printf("%d",i);
     }
   }
    return 0;
}
