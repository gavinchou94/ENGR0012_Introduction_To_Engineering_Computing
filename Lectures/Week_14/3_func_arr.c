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
  double arr[4] = {0, 0, 0, 0}; // Declare an array to hold the results

  printf("arr's org value is %lf %lf %lf %lf\n", arr[0], arr[1], arr[2], arr[3]);
  // call function 5:
  func5(a, b, c, d, arr);
  printf("arr's new value is %lf %lf %lf %lf\n", arr[0], arr[1], arr[2], arr[3]);

  printf("global variable is %lf\n", ANNUAL_INTEREST);
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

  // although we don't need to know ANNUAL_INTEREST in this function,
  // we can still access it since it's a global variable
  printf("global variable is %lf\n", ANNUAL_INTEREST);
  // but we don't have access to bonus, since it's a local variable to main
  // printf("local variable is %lf\n", bonus); // wrong

  double max = a;
  if (b > max)
  {
    max = b;
  }
  if (c > max)
  {
    max = c;
  }
  if (d > max)
  {
    max = d;
  }

  double min = a;
  if (b < min)
  {
    min = b;
  }
  if (c < min)
  {
    min = c;
  }
  if (d < min)
  {
    min = d;
  }

  double sum = a + b + c + d;
  double avg = sum / 4.0;

  arr[0] = max;
  arr[1] = min;
  arr[2] = sum;
  arr[3] = avg;

  // return arr[]; // wrong
  // return arr[4];   // wrong
  // return arr[0];   // wrong

  // NO NEED TO RETURN THE ARRAY, since arr[] is stored by address
  // and the main function can access it
}

void prod(double matrix[][3], double prd_arr[])
{
  // 3 4 5 ; prd_arr[0] = 1*3*4*5 = 60
  // 6 7 8 ; prd_arr[1] = 6*7*8 = 336
  // 1 2 3 ; prd_arr[2] = 1*2*3 = 6
  // we'd like to return the product of each row of a 3x3 matrix

  for (int i = 0; i < 3; i++) // row index 0,1,2
  {
    prd_arr[i] = 1;             // initialize the product for each row to 1
    for (int j = 0; j < 3; j++) // column index 0, 1, 2
    {
      prd_arr[i] *= matrix[i][j]; // multiply each element in the row
    }
  }
  // Working on array inside a function
  // no need to return the array, since it's passed by address

  // but you have to make sure to include the array as a parameter
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