#include <stdio.h>
#include <stdlib.h>
// what more do we need to include?

int main()
{

  // Use scanf to get three int values to be a, b, c
  // Show the area using printf if it's valid triangle
  // else show "Invalid triangle"

  // You have to calculate area based on
  // S=0.5*a*b*sin(C)
  // where sin(C) is calculated using the law of cosines, that's
  // c^2 = a^2 + b^2 - 2ab*cos(C)
  // sin(C) = sqrt(1 - cos^2(C))

  // Then use switch-case to print if angle C is an acute right or obtuse angle
  // Hints: cos(C)=0, C=90 degrees;
  // cos(C)>0, C<90 degrees;
  // cos(C)<0, C>90 degrees
  return 0;
}

// TO DO: Write a C program that follows the instructions above
// (1) practice using if statements and scanf to check if the triangle is valid
// (2) practice using math operations to calculate the area of the triangle
// (3) practice displaying using switch statement to determine the type of angle C