#include <stdio.h>
#include <string.h>

struct functest{
    char name[10];
    int rand_num;
    float rand_float;
};

void test(struct functest var){
    printf("Name is %s",var.name);
}


int main()
{

    struct functest var1;
    var1.rand_float = 10.30;
    strcpy(var1.name,"Argha");
    var1.rand_num = 10;
    test(var1);



    return 0;
}
