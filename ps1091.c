#include<stdio.h>
int main()
{
    int a,r,power=1,b;
    scanf("%d",&a);
    while(a)
    {
        r=a%2;
        b=b+r*power;
        power=power*10;
        a=a/2;
    }
    printf("%d",b);
    return 0;
}
