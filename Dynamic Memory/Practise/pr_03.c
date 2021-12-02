#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    n = 10;
    char YorN;
    int *ptr;
    ptr = (int *) calloc(n,sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    printf("Input: ");
    scanf("%c",&YorN);
    if (YorN == 'y')
    {   
        
        ptr = (int *) realloc(ptr,15 * sizeof(int));
        n = 15;
    }
    
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
        printf("value: %d\n",ptr[i]);
    }
    return 0;
}