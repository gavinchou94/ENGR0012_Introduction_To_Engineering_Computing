#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Use scanf to get the int values of a, b, c
  // Show the area using printf if it's valid triangle

  // You have to calculate based on S=0.5*a*b*sin(C)
  // where sin(C) is calculated using the law of cosines
  // c^2 = a^2 + b^2 - 2ab*cos(C)
  // sin(C) = sqrt(1 - cos^2(C))

  // And use switch-case to print whether the angle C is acute, right, or obtuse
  // Hints: cos(C)=0, C=90 degrees; cos(C)>0, C<90 degrees; cos(C)<0, C>90 degrees
}

// TO DO: Write a C program that first ask users to provide three sides of a triangle: int
// (1) practice using if statements to check if the triangle is valid
// (2) practice using math operations to calculate the area of the triangle
// (3) practice displaying using switch statement to determine the type of angle C
