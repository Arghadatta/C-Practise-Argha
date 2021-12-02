#include <stdio.h>

int main()
{
    char c;
    FILE *ptr,*ptr2;
    ptr = fopen("thing.txt","r");
    ptr2 = fopen("thing2.txt","w");
    c = fgetc(ptr);
    while (c != EOF)
    {
        fprintf(ptr2,"%c",c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}