#include <stdio.h>
#include<math.h>


int main()
{
    int subject1,subject2,subject3,PercentMark;
    printf("Enter your subject marks:\n");
    scanf("%d %d %d",&subject1,&subject2,&subject3);
    PercentMark = (subject1 + subject2 + subject3)/3;
    if (PercentMark > 40 || subject1 > 33 && subject2 >= 33 && subject2 >= 33 && subject3 >= 33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}
