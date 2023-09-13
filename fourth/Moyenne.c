#include <stdio.h>


int main(void)
{
    int a;
    int b;
    int c;
    int res;


    printf("give three numbers from your choice\n");

    scanf("%d %d %d", &a , &b, &c);

    res = a + b + c;

    printf("the sum of the number is =>  %d\n", res);
    printf("le Moyenne des numbers est => %d\n", res / 3);
}