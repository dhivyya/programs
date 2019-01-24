#include <stdio.h>

int main()
{
    int a,t=0,r;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        t=t*10+r;
        a=a/10;
    }
    
    printf("%d",t);

       
    

    return 0;
}
