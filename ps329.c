#include <stdio.h>
int main()
{
    int l,r,l=0,i,j;
    scanf("%d ,&l);
          scanf("%d",&r);
                for(i=l+1;i<r;i++)
    {
        for(j=2;j<r;j++)
        {
            if((j*j)==i)
            {
                l++;
            }
        }
    }
    printf("%d",l);

    return 0;
}
