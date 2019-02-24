#include <stdio.h>
#include<string.h>
int main()
{
   char s[100],b[100];
   int i,l,j=0;
   gets(s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]!=' ')
       {
          b[j]=s[i];
          j++;
       
       }
   }
   printf("%s",b);
    return 0;
}

