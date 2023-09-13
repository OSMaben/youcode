#include <unistd.h>
#include <stdio.h>


int main(void)
{
    int a;
    int b;
    char op;

    printf("");
    printf("\t give the two numbers \t \n");

    scanf("%d %c %d", &a , &op, &b);

    if (op == '/')
        printf(" the result of a / b is = %d\n", a / b);
    else if (op == '+')
        printf("the result of a + b is = %d\n", a + b);
    else if (op == '-')
        printf("the result of a - b is = %d\n", a - b);
    else if (op == '%')
        printf("the result of a % b is %d\n", a % b);
    else
        printf("=======Something Not Working As Expected==========  \n");
}