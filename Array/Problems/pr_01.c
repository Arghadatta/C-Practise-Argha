#include <stdio.h>

int main()
{
    int array[10]= {1,2,3,4,5,6,7,8,9,10};
    int *ptr = array;
    printf("The 1st element of array is %d\n",*ptr);
    printf("The 3rd element of array is %d\n", *(ptr+2));
    return 0;
}