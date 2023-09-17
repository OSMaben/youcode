#include <math.h>
#include <stdio.h>

//function for addition
void fn_addition(float num1, float num2) 
{
    printf("the result is => %.2f ", num1 + num2);
}

//function for siustraction
void fn_siustraction(float num1 , float num2)
{
     printf("the result is => %.2f ", num1 - num2);
}

//function for multiplication

void fn_multiplication(float num1, float num2)
{
    printf("the result is => %.2f ", num1 * num2);
   
}

//function for division

void fn_division(float num1, float num2)
{
    printf("the result is => %.2f ", num1 / num2);
}

//function for carre 
void fn_carree(float num1, float num2)
{
    printf("the result is => %.2f ", pow(num1 , num2));
}

//function for Racine carree
void fn_racine_carree(float nb)
{
    printf("the result is => %.2f ", sqrt(nb));
}


//handel error
//infinite loop tell the user chioce to quitter 

int main(void)
{
   
    menu();

}

int menu()
{
    int num;
    int a, b, i = 0;
    printf("\n===============================");
    printf("\n\n Choisissez une operation:\t");
    printf("\n 1. Addition:\t");
    printf("\n 2. Soustraction\t");
    printf("\n 3. Multiplication\t");
    printf("\n 4. Division\t");
    printf("\n 5. Carre\t");
    printf("\n 6 Racine carre\t");
    printf("\n 7. Quitter \n  $> ");
    
  
    while(i < 20)
    {
         scanf("%d", &num);
        switch (num)
        {
         case 1:
         printf("\ngive the two values => ");
            scanf("%d + %d",&a, &b );     
            fn_addition(a, b);
            main();
            break;
         case 2:
         printf("\ngive the two values => ");
            scanf("%d - %d",&a, &b );     
            fn_siustraction(a, b);
            main();
            break;
         case 3:
         printf("\ngive the two values => ");
            scanf("%d * %d",&a, &b );     
            fn_multiplication(a, b);
            main();
            break;
         case 4:
         printf("\ngive the two values => ");
            scanf("%d / %d",&a, &b );     
            fn_division(a, b);
            main();
            break;
         case 5:
         printf("\ngive the two values => ");
            scanf("%d ^ %d",&a, &b );     
            fn_carree(a, b);
            main();
            break;
         case 6:
         printf("\ngive the two values => ");
            scanf("%d", &a);     
            fn_racine_carree(a);
            main();
            break;
         case 7:
         printf("finished !\n");
         return 0;
            break;
         default:
         printf("Error!\n");
            break;
        }
       i++;
    }
    
}
