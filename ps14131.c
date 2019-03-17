#include<stdio.h>
int main()
{
    int a,r,z;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        if(r%2!=0)
        {
          z+=r;  
        }
        a=a/10;
    }
    if(z%2==0)
    {
        printf("E");
    }
    else
    printf("O");
    return 0;
}
