#include<stdio.h>

int main()

{

	int r=0,num,num1;

	scanf("%d",&num);

	while(num!=0)

	{

		num1=num%10;

		r=r*10+num1;
    num=num/10;

	}

	printf("%d",r);

return 0;

}
