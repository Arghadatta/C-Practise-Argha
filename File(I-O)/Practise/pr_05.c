#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("intread.txt","r");
    fscanf(ptr,"%d",&num);
    // *ptr2 = fopen("intread.txt","w\");
    ptr2 = fopen("intread.txt","w");
    fprintf(ptr2,"%d",num*2);

    return 0;
}