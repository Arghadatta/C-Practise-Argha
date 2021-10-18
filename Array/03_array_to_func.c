#include <stdio.h>

void printArray(int *ptr,int size){
    for (int i = 0; i < size; i++)
    {
        printf("The %d value of array is %d\n",i+1,*(ptr+i));
    }
    
}

int main()
{
    int arr1[] = {1,2,3,4,55,66,77,88};
    printArray(arr1,8);

    return 0;
}