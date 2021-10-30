#include <stdio.h>

void mulTable(int *mul_array , int n , int len)
{

    for (int i = 0; i < len ; i++)
    {
        mul_array[i] = n * (i+1);

    }

    for (int i = 0; i < len; i++)
    {
        printf("\n%d X %d = %d\n", n , i+1 , mul_array[i]);
    }
    printf("************************************** \n \n");

}


int main()
{
    int n , len , level;
    printf("Enter your preferred num and length and level for multiply : \n");
    scanf("%d",&n);
    scanf("%d",&len);


    int mulTable_arr[3][len];
    mulTable(mulTable_arr[0], n , len);
    return 0;
}