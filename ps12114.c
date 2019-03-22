#include <stdio.h>
void main() 
{
	int n,s=0,sum,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=r*r;
		s=s+sum;
		n=n/10;
	}
	printf("%d",s);
}
