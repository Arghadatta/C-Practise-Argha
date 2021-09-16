#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int  number,guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    
    // Logic Building:
    do
    {
        printf("Enter the number from 1 - 100:\n");
        scanf("%d",&guess);
        if ( guess < number )
            printf("Higher Number\n");
        else if (number < guess)
        {
            printf("Lower Number\n");
        }
        else
        {
            printf("You guessed it in %d times", nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}