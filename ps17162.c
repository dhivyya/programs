#include <stdio.h>
int main() 
{
	char a[30];
	int n,i,j,f=0,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		gets(a);
    for(i=0;i<k;i++)
	{
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'||a[j]=='A'||a[j]=='E'||a[j]=='I'||a[j]=='O'||a[j]=='U')
			{
				f=1;
				break;
			}
		}
		if(f==0)
			break;
	
	}
	if(f==0)
		printf("no");
	
	else
		printf("yes");
	return 0;
  }
