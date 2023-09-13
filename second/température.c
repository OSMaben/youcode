#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int c;
    int f;
    printf("what is the current temperature ? \n $> \t");
    scanf("%d", &f);

    c = (f - 32) / 1.8;

    printf("here is the weather in Celsius is [%d] \n", c);

    if(c < 11)
        printf("the Weather if very cold\n");

    else if (c > 11 && c < 18)
        printf("the weather is cold\n");

    else if(c > 18 && c < 30)
        printf("the weather is hot\n");

    else if(c > 30 && c < 40)
        printf("the weather is very hot\n");
        
    else 
        printf("the weather is boiling\n");

}