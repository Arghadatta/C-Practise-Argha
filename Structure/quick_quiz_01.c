#include <stdio.h>

int main()
{
    struct employee{
        int code;
        float salary;
        char name_str[10];
    };

    struct employee p1;
    struct employee p2;
    struct employee p3;

    
    printf("Enter the name of employee 01: ");
    scanf("%s",p1.name_str);
    printf("Enter the code of employee 01: ");
    scanf("%d",&p1.code);
    printf("Enter the salary of employee 01: ");
    scanf("%f",&p1.salary);


    printf("Enter the name of employee 02: ");
    scanf("%s",p2.name_str);
    printf("Enter the code of employee 02: ");
    scanf("%d",&p2.code);
    printf("Enter the salary of employee 03: ");
    scanf("%f",&p2.salary);


    printf("Enter the name of employee 03: ");
    scanf("%s",p3.name_str);
    printf("Enter the code of employee 03: ");
    scanf("%d",&p2.code);
    printf("Enter the salary of employee 03: ");
    scanf("%f",&p3.salary);


    printf("Info of Employee p1 : \n");
    printf("Name : %s \n",p1.name_str);
    printf("Code : %d\n",p1.code);
    printf("Salary : %f \n",p1.salary);

    printf("Info of Employee p2 : \n");
    printf("Name : %s \n",p2.name_str);
    printf("Code : %d\n",p2.code);
    printf("Salary : %f \n",p2.salary);

    printf("Info of Employee p3 : \n");
    printf("Name : %s \n",p3.name_str);
    printf("Code : %d\n",p3.code);
    printf("Salary : %f \n",p3.salary);

    return 0;
}