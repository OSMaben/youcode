#include <stdio.h>
#include <math.h>



int main(void)
{
    float Xa;
    float Ya;
    float Xb;
    float Yb;

    printf("give the coordinates of each number $> \n");

    scanf("%f %f %f %f", &Xa, &Xb, &Xb, &Yb);
    float res = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));

    printf("Distance between the two points is => %.2f", res);
}