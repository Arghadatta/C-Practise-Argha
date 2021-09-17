#include <stdio.h>

int sum(int a , int b){
    int result;
    result = a + b;
    return result;
}


int main()
{   
    int sum1;
    
    sum1 = sum(10 , 20);
    printf("%d",sum1);
    return 0;
}