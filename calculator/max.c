#include "main.h"
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

int fn_max(int arr[], int n)
{
   // 3 4 1 0 9
   int f_max = arr[0];// the first index
   int i = 1;

   while(i < n)
   {
      if(arr[i] > f_max)
         f_max = arr[i];
      i++;
   }
   return f_max;
}
int fn_min(int arr[], int n)
{
   // 3 4 1 0 9
   int f_min = arr[0];// the first index
   int i = 1;

   while(i < n)
   {
      if(arr[i] < f_min)
         f_min = arr[i];
      i++;
   }
   return f_min;
}


void checker(int num)
{
    int i = 1;
    int tab[5];
    //for max value
    if(num == 1)
    {
        printf("give the numbers\n\n");
        printf("you must exactly enter 5 numbers\n");
        while(i <= 5)
        {
            printf("give value [%d] =>", i);
            scanf("%d", &tab[i]);
            i++;
        }
         printf("loading...\n");
        printf("the max value is %d =>", fn_max(tab, i));
    }
    //for min
    else if(num == 2)
    {
         printf("give the numbers\n\n");
        printf("you must exactly enter 5 numbers\n");
        while(i <= 5)
        {
            printf("give value [%d] =>", i);
            scanf("%d", &tab[i]);
            i++;
        }
        printf("loading...\n");
        printf("the min value is %d =>", fn_min(tab, i));
    }
    // else if (num == 3)
    // {
    //      printf("give the numbers\n\n");
    //     printf("you must exactly enter 5 numbers\n");
    //     while(i < 5)
    //     {
    //         printf("give value [%d] =>", i);
    //         scanf("%d", tab[i]);
    //         int agv = tab[i] + tab[i + 1] 
    //         i++;
    //     }
    //     printf("loading...\n");
    //     printf("the min value is %d =>", min(tab));
    // }
    
    else
    {
        printf("loading...\n");
        printf("there was an error!\n");
    }
}


//handel error
//infinite loop tell the user chioce to quitter 

void menu(void)
{
    int num;// for check which operation the user wants
    int tab[20];// for taking the random values from the user 
    int num2; // for choosing betwenn min, max, avrage
    int a, b, i = 0;
    printf("\n===============================");
    printf("\n\n Choisissez une operation:\t");
    printf("\n 1. Addition:\t");
    printf("\n 2. Soustraction\t");
    printf("\n 3. Multiplication\t");
    printf("\n 4. Division\t");
    printf("\n 5. Carre\t");
    printf("\n 6  Racine carre\t");
    printf("\n 7. tablue\t");
    printf("\n 8. Quitter \n  $> ");
    
  
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
            printf("choose\n");
            printf("1, max\n");
            printf("2, min\n");
            printf("3, avrage\n");
            scanf("%d", &num2);
            checker(num2);
            break;
         default:
         printf("Error!\n");
            break;
        }
       i++;
    }
    
}


int main(void)
{
   
   menu();

}
