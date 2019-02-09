#include<stdio.h>

void main()

{

int n,c=1,n1;

scanf("%d",&n);

while(n>0)

{

n1=n%10;

c=c*n1;

n=n/10;

}

printf("%d",c);

}
