#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],b[100],n,k,temp,i,j,c[100],m=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(i=0;i<k;i++)
  scanf("%d",&b[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                c[l]=a[i];
                b[j]='\0';
                m++;
                break;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
        printf("%d ",c[i]);
  }}
