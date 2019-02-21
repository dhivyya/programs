#include <stdio.h>
#include<string.h>

int main()
{
   char a[10];
   int i,c=0,l;
   scanf("%s",a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
   if((a[i]>='0')&&(a[i]<='9'))
   {
      c=0;
   }
   else
   c++;
   }
   if(c==0)
   {
       printf("yes");
   }
   else
   printf("no");
    return 0;
}
