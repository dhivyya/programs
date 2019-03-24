#include <stdio.h>
int main()
{
	int n,a[100],i,s=0,j,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
	    printf("%d",a[n-1]);
	}
	else
	{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		    s=s+a[j];
		}
		if(m>s)
		{
		    m=s;
		}
	}
	printf("%d",m);
	}
	return 0;
}
