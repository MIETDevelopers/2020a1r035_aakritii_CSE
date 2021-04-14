#include <stdio.h>
int main()
{
   int number1, number2, add, subtract, multiply;
   float divide;
 
   printf("Enter the first number\n");
   scanf("%d", &number1);
   printf("Enter the second number\n");
   scanf("%d", &number2);
 
   add = number1 + number2;
   subtract = number1 - number2;
   multiply = number1 * number2;
   divide = (float)number1 / number2;

   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %f\n", divide);
 
   return 0;
}
