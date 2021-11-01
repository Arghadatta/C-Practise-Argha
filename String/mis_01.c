#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int length , check;
    check = 0;
    printf("Enter a string :");
    gets(str);

    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            check = 1;
            break;
        }
        
    }
    
    if (check == 0)
    {
        printf("True");
    }
    else
        printf("False");    

    return 0;
}