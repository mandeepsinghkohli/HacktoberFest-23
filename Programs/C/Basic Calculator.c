#include <stdio.h>

int main() 
{

  char operator; //variable declared to select the operation which is to be performed.
  double one, two;
  printf("Enter the operator (+, -, *, /): ");
  scanf("%c", &operator);
  printf("Enter two operands: ");
  scanf("%lf %lf", &one, &two);

  switch (operator) //switch case to select the operation to be performed.
  {
    case '+': //addition of two operands.
      printf("%.1lf + %.1lf = %.1lf", one, two, one + two);
      break;
    case '-': //substraction of two operands.
      printf("%.1lf - %.1lf = %.1lf", one, two, one - two);
      break;
    case '*': //multiplication of two operands.
      printf("%.1lf * %.1lf = %.1lf", one, two, one * two);
      break;
    case '/': //division of two operands.
      printf("%.1lf / %.1lf = %.1lf", one, two, one / two);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}