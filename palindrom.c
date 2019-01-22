#include<stdio.h>
int main()
{
int original,r=0,n,rem;
scanf("%d",&n);
original=n;
while(n!=0)
{
	rem=n%10;
	r=r*10+rem;
	n=n/10;
}
if(original==r)
printf("\nPalindrome");
else
printf("\nNot Palindrome");
	return 0;
} 
