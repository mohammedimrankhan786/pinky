#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,nextterm;
printf("enter the number:");
scanf("%d",&n);
printf("fibonacci series");
for(i=0;i<n;++i)
{
nextterm=t1+t2;
t1=t1;
t2=nextterm;
}
return 0;
}
