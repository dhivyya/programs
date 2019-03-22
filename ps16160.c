#include<stdio.h>    
void main(){  
int a[10],n,i,z,y,c=0;    
scanf("%d %d",&z,&y);  
n=z|y;
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
for(i=i-1;i>=0;i--)    
{    

if(a[i]==1)
c++;
} 
printf("%d",c);
}  
