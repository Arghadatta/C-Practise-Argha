#include <stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    printf("Initializing GoodMorning , GoodAfternoon And GoodNight functions--\n");
    GoodMorning();
    GoodAfternoon();
    GoodNight();

    return 0;
}

void GoodMorning(){
    printf("Good Morning\n");
}
void GoodAfternoon(){
    printf("good Afternoon\n");
}
void GoodNight(){
    printf("Good Night\n");
}