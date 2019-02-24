#include<stdio.h>
int main()
{
 int i,n,a[100],k,flag=1;
 scanf("%d",&n);
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
{
    if(k==a[i])
    {
        flag=0;
        break;
    }
    else
    flag=1;
}
if(flag==0)
{
    printf("yes");
}
else
printf("no");
return 0;
}
