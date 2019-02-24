#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[10][10],i,j,l=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
  scanf("%d",&a[i][j]); 
  }
  }
for(i=0;i<=n;i++)
{
 for(j=0;j<=n;j++)
 {
  if(a[i][j]==1)
  {
    if(a[i-1][j]==0&&a[i][j-1]==0&&a[i][j+1]==0&&a[i+1][j]==0)
       {
              l++;
              
          }
          } 
          }
    }
    
    printf("%d",l);
    return 0;
}
