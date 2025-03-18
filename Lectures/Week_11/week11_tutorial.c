#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Include math library for math functions

int main()
{
  // Defining integers
  int x = 5, y = 4, z;

  // Defining doubles
  double a = 5.00, b = 4.00, c;

  // Basic math operations
  z = x + y; // Addition
  c = a * b; // Multiplication

  printf("Addition (int): Z = %d\n", z);
  printf("Multiplication (double): C = %lf\n", c);

  // Division examples
  z = x / y; // Integer division yields only the quotient int
  c = a / b; // Double division yields the full double result

  printf("Integer Division: Z = %d\n", z);
  printf("Double Division: C = %lf\n", c);

  z = 5 / 2 * 3; // Take a guess what is z?
  c = 5 / 2 * 3; // Take a guess what is c?
  printf("z=%d\nc=%lf\n", z, c);

  z = 5.0 / 2 * 3; // Take a guess what is z?
  c = 5.0 / 2 * 3; // Take a guess what is c?
  printf("another version:\nz=%d\nc=%lf\n", z, c);

  // Remainder operation
  z = x % y; // Modulus operator
  printf("Remainder: Z = %d\n", z);

  // Variables for demonstration
  double num1 = 2.0, num2 = 3.0, result;
  double angle = 3.14159265358979323846 / 4; // 45 degrees in radians

  // Exponentiation: num1 raised to the power of num2
  result = pow(num1, num2);
  printf("Exponentiation: %.2lf^%.2lf = %.2lf\n", num1, num2, result);

  // Natural logarithm (base e)
  result = log(num1);
  printf("Natural Logarithm: log(%.2lf) = %.2lf\n", num1, result);

  // Logarithm base 10
  result = log10(num1);
  printf("Logarithm Base 10: log10(%.2lf) = %.2lf\n", num1, result);

  // Raising e to the power of num2
  result = exp(num2);
  printf("Exponential: e^%.2lf = %.2lf\n", num2, result);

  // Rounding up (ceil) and down (floor)
  double num = 2.7;
  result = ceil(num);
  printf("Ceiling: ceil(%.2lf) = %.2lf\n", num, result);
  result = floor(num);
  printf("Floor: floor(%.2lf) = %.2lf\n", num, result);

  // Square root
  result = sqrt(num1);
  printf("Square Root: sqrt(%.2lf) = %.2lf\n", num1, result);

  // Trigonometric functions
  result = cos(angle);
  printf("Cosine: cos(%.2lf radians) = %.2lf\n", angle, result);
  result = sin(angle);
  printf("Sine: sin(%.2lf radians) = %.2lf\n", angle, result);

  int x;
  printf("Enter 1, 2, or 3: ");
  scanf("%d", &x);

  if (x == 1)
  {
    printf("x is 1\n");
  }

  int x;
  printf("Enter 1, 2, or 3: ");
  scanf("%d", &y);

  if (y == 1)
  {
    printf("y is 1\n");
  }
  else
  {
    printf("Condition not met\n");
  }

  int z;
  printf("Enter 1, 2, or 3: ");
  scanf("%d", &z);

  if (z == 1)
  {
    printf("z is 1\n");
  }
  else if (z == 2)
  {
    printf("z is 2\n");
  }
  else if (z == 3)
  {
    printf("z is 3\n");
  }
  else
  {
    printf("Condition not met\n");
  }

  char op;
  printf("Enter A, B, or C: ");
  scanf(" %c", &op); // Note the space before %c to handle newline characters

  if (op == 'A')
  {
    printf("op is A\n");
  }
  else if (op == 'B')
  {
    printf("op is B\n");
  }
  else if (op == 'C')
  {
    printf("op is C\n");
  }
  else
  {
    printf("Condition not met\n");
  }

  // Now take a look at the HW7 structure

  return 0;
}