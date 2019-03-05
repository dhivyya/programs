#include<stdio.h>
int main()
{
    int i=1,a,b;
    scanf("%d%d",&a,&b);
    while(b)
    {
        i=i*a;
        b--;
    }
    printf("%d",i);
    return 0;
}
