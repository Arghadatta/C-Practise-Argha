#include <stdio.h>

int tenXchange(int *a){
    int temp;
    temp = *a * 10;
    *a = temp;
}

int main()
{
    int a = 2;
    printf("The Value before Func is %d\n",a);
    tenXchange(&a);
    printf("The Value after Func is %d\n",a);
    return 0;
}