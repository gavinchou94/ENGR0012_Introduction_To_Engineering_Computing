#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ANNUAL_INTEREST 0.05
#define MONTHS 12

// Function prototypes
void func5(double, double, double, double, double[]); // Function with array parameters
void prod(double[][3], double[]);                     // Function with array parameters
double amount(double);

int main()
{
  double a = 1.0, b = 2.0, c = 3.0, d = 4.0;
  double arr[4]; // Declare an array to hold the results

  // where and whether to include []?

  double investment = 1000.0;
  double total_amount = amount(investment);

  double bonus = 25.0; // local variable to main

  return 0;
}

// Function definitions
void func5(double a, double b, double c, double d, double arr[])
{
  // we'd like to return the array as follows:
  // First element to be maximum among a, b, c, d
  // Second element to be minimum among a, b, c, d
  // Third element to be the sum of a, b, c, d
  // Fourth element to be average of a, b, c, d

  // return arr[]; // wrong
  // return arr[4];   // wrong
  // return arr[0];   // wrong

  // NO NEED TO RETURN THE ARRAY, since arr[] is stored by address
  // and the main function can access it
}

void prod(double matrix[][3], double prd_arr[])
{
  // we'd like to return the product of each row of a 3x3 matrix
}

double amount(double investment)
{
  // we'd like to print the total amount after each month
  // also return to main the total amount after 12 months
  // given an initial investment and an annual interest rate
  double monthly_interest = ANNUAL_INTEREST / MONTHS; // local variable to func

  // finish it together using a for-loop
  return 0; // placeholder now, need to return the total amount
}