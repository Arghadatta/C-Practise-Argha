#include<stdio.h>
#include<math.h>
int main()
{
	int num1;
	printf("Enter your number:%d\n",num1);
	scanf("%d",&num1);
	if(num1>0)
		printf("Pos");
	else if(num1<0)
		printf("Neg");
	else
		printf("Equal");
	return 0;
}
