#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char Fname[20];
    char sex[10];
    int age;
    int phone;

    printf("What is Your Full Name \n> \t");
    scanf("%s", &Fname);
    //...........................

    printf("what is your Age \n> \t");
    scanf("%d", &age);
    //............................

    printf("what is your sex \n> \t");
    scanf("%s", &sex);
    //............................


    printf("what is your know number \n \n> \t");
    scanf("%d", &phone);


//==================================================

    printf("\n \t HERE IS YOUR FULL INFO\n \n");

    printf("your full name is \"[%s]\" \n", Fname);
    printf("your age is  \"[%d]\"  \n", age);
    printf("your sex is  \"[%s]\"  \n", sex);
    printf("your phone number \"[%d]\"  \n", phone);
}