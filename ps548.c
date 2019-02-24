#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if((i%2==1)&&(n%i==0))
    {
        printf("%d\t",i);
    }
        
    }
    
}
