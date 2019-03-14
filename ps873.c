#include <stdio.h>
void main() 
{
	int n,k,z[10],i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&z[i]);
	for(i=0;i<n;i++)
	{
		if(z[i]==k)
		{
			printf("%d",i+1);
			break;
		}
	}
}
