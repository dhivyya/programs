#include<stdio.h>
int main()
{
    int n,i,l=0,c=0,z;
    char a[100];
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            l++;
        }
        else
        c++;
         }
         z=l*c;
         printf("%d",z);
         return 0;
}
