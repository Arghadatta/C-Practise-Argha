#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2;
	printf("Enter your 1st number:\n");
	scanf("%d",&num1);
	printf("Enter your 2nd number:\n");
	scanf("%d",&num2);
	if(num1>num2)
		printf("Num1 is greater");
	else if(num1<num2)
		printf("Num 2 is greater");
	else
		printf("Equal");
	return 0;
}

