#include<stdio.h>

int main()
{
int n,i,j,s=0;
scanf("%d",&n);
for(i=1;i<11;i++)
{
s=s+(n*i);
}
printf("%d\n",s);
return 0;
}