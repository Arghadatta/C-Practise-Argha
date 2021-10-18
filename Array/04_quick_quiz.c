#include <stdio.h>

int main()
{
    int row = 2,column = 2;
    int arr2d[row][column];
    for (int r = 0; r < row; r++)
    {   
        for (int c = 0; c < column; c++)
        {
            printf("Enter the value of column %d of row %d :",c+1,r+1);
            scanf("%d",&arr2d[r][c]);
            
        }
        
    }

    printf("{");
    for (int r = 0; r < row; r++)
    {   
        for (int c = 0; c < column; c++)
        {   
            printf("Value of %d row %d column is %d\n",r+1,c+1,arr2d[r][c]);
        }

    //printf("}");
        
    }
    return 0;
}