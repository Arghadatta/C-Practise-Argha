#include <stdio.h>

int main()
{
    int n_student = 5;
    int mark[n_student];
    for (int i = 0; i < n_student; i++) //Convenient way to use Array Input
    {
        printf("Enter the mark of Student %d :",i+1);
        scanf("%d",&mark[i]);
    }
    
    printf("\n***********************************************\n\n");

    for (int i = 0; i < n_student; i++)
    {
        printf("The mark of student %d is : %d\n",i+1,mark[i]);
    }
    
}