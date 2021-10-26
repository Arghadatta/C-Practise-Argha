#include <stdio.h>

int main()
{
    int size;
    int array[100];

    printf("Enter the max size of array : ");
    scanf("%d", &size);

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

// #include<stdio.h>

// int main()
// {
//     //let's assume the maximum array size as 100.
//     int arr[100],size,i;

//     //Get size input from user
//     printf("Enter array size\n");
//     scanf("%d",&size);

//     //Get all elements using for loop and store it in array
//     printf("Enter array elements\n");
//     for(i = 0; i < size; i++)
//           scanf("%d",&arr[i]);

//     //print only the positive elements in the array
//     printf("Elements are\n");
//     for(i = 0; i < size; i++)
//     {
//           //positive numbers are greater than 0.
//           /*if you want to print the negative numbers,
//             just change the if condition as arr[i] < 0 */
//           if(arr[i] > 0)
//               printf("%d\n",arr[i]);
//     }

//     return 0;
// }