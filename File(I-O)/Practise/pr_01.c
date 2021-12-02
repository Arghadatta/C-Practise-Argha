#include <stdio.h>

int main()
{
    int num1,num2,num3;

    FILE *ptr;
    ptr = fopen("prac.txt","r");
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);


    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);    
    return 0;
}