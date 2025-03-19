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

  printf("Addition (int): z = %d\n", z);
  printf("Multiplication (double): c = %lf\n", c);

  // Division examples
  z = x / y; // Integer division yields only the quotient as an int
  c = a / b; // Double division yields the full double result

  printf("Integer Division: z = %d\n", z);
  printf("Double Division: c = %lf\n", c);

  z = 5 / 2 * 3; // Take a guess what is z?
  c = 5 / 2 * 3; // Take a guess what is c?
  printf("z=%d\nc=%lf\n", z, c);
  // The result is z=6, c=6.000000
  // This is because 5/2 is evaluated as an integer division, which results in 2.
  // Then, 2*3 equals 6.
  // When 6 is assigned to z, it stays as int, resulting in 6
  // When 6 is assigned to c, it is converted to a double, resulting in 6.000000

  z = 5.0 / 2 * 3; // Take a guess what is z?
  c = 5.0 / 2 * 3; // Take a guess what is c?
  printf("Another version:\nz=%d\nc=%lf\n", z, c);
  // The another-version result is z=7, c=7.500000
  // This is because 5.0/2 is evaluated as a double division, which results in 2.5
  // Then, 2.5*3 equals 7.5.
  // When 7 is assigned to z, it is converted to an int, resulting in 7
  // When 7.5 is assigned to c, it stays as double, resulting in 7.500000

  // Remainder operation
  z = x % y; // Modulus operator
  printf("Remainder: z = %d\n", z);
  // modulus is only valid for integers, if x or y is not int, it will give an error

  // Variables for demonstration
  double num1 = 2.0, num2 = 3.0, result;
  double angle = 3.14159265358979323846 / 4; // (pi/4 in radians)
  // Above is not a good practice, you should use M_PI from math.h

  // Exponentiation: num1 raised to the power of num2
  result = pow(num1, num2);
  printf("Exponentiation: %.2lf^%.2lf = %.2lf\n", num1, num2, result);

  // Natural logarithm (base e)
  result = log(num1);
  printf("Natural Logarithm: log(%.2lf) = %.2lf\n", num1, result);

  // Logarithm base 10
  result = log10(num1);
  printf("Logarithm Base 10: log10(%.2lf) = %.2lf\n", num1, result);

  // Raising Euler constant e to the power of num2
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

  int X;
  printf("Enter 1, 2, or 3 for X: ");
  scanf("%d", &X);

  if (X == 1)
  {
    printf("X is 1\n");
  }

  int Y;
  printf("Enter 1, 2, or 3 for Y: ");
  scanf("%d", &Y);

  if (Y == 1)
  {
    printf("Y is 1\n");
  }
  else
  {
    printf("Condition not met\n");
  }

  int Z;
  printf("Enter 1, 2, or 3 for Z: ");
  scanf("%d", &Z);

  if (Z == 1)
  {
    printf("Z is 1\n");
  }
  else if (Z == 2)
  {
    printf("z is 2\n");
  }
  else if (Z == 3)
  {
    printf("z is 3\n");
  }
  else
  {
    printf("Condition not met\n");
  }

  char op;
  printf("Enter A, B, or C for op: ");
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