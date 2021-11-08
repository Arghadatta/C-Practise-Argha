#include <stdio.h>
#include <string.h>
struct data
{
    char name[10];
    int age;
    char profession[10];
};



int main()
{
    struct data Argha;
    Argha.name;
    Argha.age = 15;
    Argha.profession;
    strcpy(Argha.name,"Argha Datta");
    strcpy(Argha.profession,"Student");

    printf("Name is %s\n",Argha.name);
    printf("Age is %d\n",Argha.age);
    printf("Profession is %s\n",Argha.profession);

    return 0;
}