#include <stdio.h>
void main() 
{
	int n,a[30],i,c=1,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		  if(a[i-1]<a[i])
		    {
		        c++;
		    }
		    else
		    {
		        if(m<c)
		        {
		            m=c;
		        }
		        c=1;
		    }
		}
		if(c>m)
		{
		     printf("%d",c);
		}
		else
		{
            printf("%d",m);
		}
}
