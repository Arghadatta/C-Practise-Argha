#include <stdio.h>

int main()
{

    int input;
    printf("Enter number: ");
    scanf("%d",&input);



    FILE *ptr;
    ptr = fopen("multiplication.txt","w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d X %d = %d\n",input,i+1,input*(i+1));
    }
    fclose(ptr);
    return 0;
}