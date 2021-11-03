#include <stdio.h>

char str1len(char * st){
    // char *ptr = st; 
    int len = 0;
    while (*st != '\0')
    {
        len++;
        st++;
    }
    return len;
    
}

int main()
{
    char st[]= "Argha";
    int len = 0;
    len = str1len(st);
    printf("Len is %d", len);
    return 0;
}