#include <stdio.h>
void checkString(char *st , char l){
    while (*st != '\0')
    {
        if (*st == l)
        {
            printf("The given letter is present\n");
            break;
        }
        
        st++;
    }
    
}

int main()
{
    char st[] = "Argha";
    checkString(st , 'f');
    return 0;
}