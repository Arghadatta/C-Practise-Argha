#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int *ptr;
    int n;
    scanf("%d",&n);

    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d th value: ", i + 1);
        scanf("%d", &ptr[i]);
        free(ptr);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dth Value is %d\n", i + 1,ptr[i]);
    }

    return 0;
}