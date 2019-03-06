#include<stdio.h>
int main()
{
    int a,r,power=1,b;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        b=b+r*power;
        power=power*2;
        a=a/10;
    }
    printf("%d",b);
    return 0;
}
