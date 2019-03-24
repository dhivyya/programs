#include<stdio.h>
int main()
{
   int n,a[10],i,z=0,temp=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   temp=a[0];
   a[0]=a[n-1];
   a[n-1]=temp;
   for(i=0;i<n-1;i++)
   {
       if(a[i]<a[i+1])
       {
           z=z+a[i+1];
   }
   else{
   z=z+a[i];
   }
   }
   printf("%d",z);
   return 0;
}
