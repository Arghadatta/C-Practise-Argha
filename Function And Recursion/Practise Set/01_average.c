#include <stdio.h>

float average(int x, int y, int z);

int main()
{
    int input1,input2,input3;
    printf("Enter The 3 numbers for average -->\n");
    scanf("%d", &input1);
    scanf("%d", &input2);
    scanf("%d", &input3);
    printf("The Average of three numbers is %.3f",average(input1 , input2 , input3));
    return 0;
}

float average(int x, int y, int z){
    int result;
    result = (x + y +z)/3;
    return result;
}