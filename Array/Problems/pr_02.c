#include <stdio.h>

int main()
{
    int array_mt[10];
    int *ptr_array = array_mt; 
    for (int i = 0; i < 10; i++)
    {
        array_mt[i] = 5 * (i+1);

    }
    for (int j = 0; j < 10; j++)
    {
        printf("The %d th value is %d\n",j+1,array_mt[j]);
        /* code */
    }
    
    return 0;
}