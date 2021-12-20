#include <stdio.h>

int main()
{

    long long int input;
    printf("Enter number: ");
    scanf("%lld",&input);



    FILE *ptr;
    ptr = fopen("multiplication.txt","w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%lld X %d = %lld\n",input,i+1,input*(i+1));
    }
    fclose(ptr);
    return 0;
}