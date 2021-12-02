#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    float *ptr;

    ptr = (float *)malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("%d th value: ", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%dth Value is %f\n", i + 1, ptr[i]);
    }

    return 0;
}