#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter The Value Of Marks Of Student %d : ", i+1);
        scanf("%d",&marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The Value Of Marks Of Student %d is : %d\n",i +1,marks[i]);
    }
    
    return 0;
}
