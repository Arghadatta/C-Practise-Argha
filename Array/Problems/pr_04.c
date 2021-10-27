#include <stdio.h>

int main()
{
    int size;
    printf("Enter the max size of array : ");
    scanf("%d", &size);

    int array[size];


    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d value /element of the array :\n", i+1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            printf("The Positive values are %d\n", array[i]);
        }
    }

    return 0;
}
