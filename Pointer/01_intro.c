#include <stdio.h>

int main()
{
    int a = 100;
    //printf("%u\n", &a);
    int *j = &a;
    printf("The value of a is %d\n", *j);
    printf("The address of j is %d\n", *(&j));
    return 0;
}
//GIT MERGED COPY