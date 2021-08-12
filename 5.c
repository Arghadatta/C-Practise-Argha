#include<stdio.h>
#include<math.h>

int main()
{
	int year;
	printf("Enter your desired year:\n");
	scanf("%d",&year);
	if (year % 400 == 0)
		printf("The entered year is a leap year");
	else if (year % 4 == 0 && year % 100!=0)
		printf("The entered year is a leap year");
	else
		printf("The entered year isn't a leap year");
	return 0;
}

