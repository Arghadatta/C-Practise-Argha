#include <stdio.h>

int main()
{
    char inputUser1[100];
    char inputUser2[100];
    int salary1,salary2;
    char void_fill;

    printf("Enter the first employee's name: ");
    gets(inputUser1);
    printf("Enter the first employee's salary: ");
    scanf("%d",&salary1);
    void_fill = getchar();

    printf("Enter the second employee's name: ");
    gets(inputUser2);
    printf("Enter the second employee's salary: ");
    scanf("%d",&salary2);
    void_fill = getchar();
    

    FILE *ptr;
    ptr = fopen("info.txt","w");
    fprintf(ptr,"The name is %s and salary is %d Taka\n",inputUser1,salary1);
    fprintf(ptr,"The name is %s and salary is %d Taka\n",inputUser2,salary2);
    fclose(ptr);

    return 0;
}