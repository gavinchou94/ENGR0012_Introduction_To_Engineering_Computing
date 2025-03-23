#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Include math library for math functions

int main()
{
  int a, b, c;
  printf("Enter three integers for a/b/c, must be in ascending order:\n");

  printf("Enter a: ");
  scanf("%d", &a);

  printf("Enter b: ");
  scanf("%d", &b);

  printf("Enter c: ");
  scanf("%d", &c);
  // you can also use scanf("%d %d %d", &a, &b, &c);

  printf("The three sides you entered are: %d, %d, %d\n", a, b, c);
  if (a + b > c && a + c > b && b + c > a)
  {
    printf("The three sides a/b/c are valid for a triangle\n");

    // first find cosC
    double cosC;
    cosC = (a * a + b * b - c * c) / (2.0 * a * b);
    // wrong if cosC = (a^2+b^2-c^2)/(2.0 * a * b);
    // wrong if cosC = (a*a+b*b-c*c)/(2 * a * b);
    // correct if cosC = (pow(a,2)+pow(b,2)-pow(c,2))/(2.0 * a * b);

    // now find sinC
    double sinC;
    sinC = sqrt(1 - cosC * cosC);
    // it's okay to merge the above two lines into one line
    // e.g., double sinC = sqrt(1 - pow(cosC, 2));

    // finally find the area
    double area;
    area = 0.5 * a * b * sinC;
    printf("The area of the triangle is %.2f\n", area);

    // Then use switch-case to print if angle C is
    // acute/right/obtuse angle
    // Hints: cos(C)=0, C=90 degrees;
    // cos(C)>0, C<90 degrees;
    // cos(C)<0, C>90 degrees

    char angle_type;
    if (cosC == 0)
    {
      angle_type = 2; // right angle
    }
    else if (cosC > 0)
    {
      angle_type = 1; // acute angle
    }
    else
    {
      angle_type = 3; // obtuse angle
    }

    char output;
    switch (angle_type)
    {
    case 1:
      output = 'A';
      break;
    case 2:
      output = 'R';
      break;
    case 3:
      output = 'O';
      break;
    }
    printf("Angle C is %c (A for acute, R for right, O for obtuse)\n\n", output);
  }
  else
  {
    printf("The three sides a/b/c cannot make a triangle\n\n");
  }
  return 0;
}

// TO DO: Write a C program that follows the instructions above
// (1) practice using if statements and scanf to check if the triangle is valid
// (2) practice using math operations to calculate the area of the triangle
// (3) practice displaying using switch statement to determine the type of angle C