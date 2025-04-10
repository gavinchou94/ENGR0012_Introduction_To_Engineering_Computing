#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum_of_squares(int, int, int); // part of TODO 3
void triangle(double[], double[]); // part of TODO 4
// prototype note:
// shouldn't be double[3] and double[2]
// shouldn't be just double and double

int main()
{
   // TODO 1
   double arr[8] = {-5, 9.5, 2, -1.34, 6, -7, 0.54, -4};
   double min_sq = arr[0] * arr[0];
   for (int i = 1; i < 8; i++)
   {
      if (arr[i] * arr[i] < min_sq)
      {
         min_sq = arr[i] * arr[i];
      }
   }
   printf("\nMinimum square value: %.2f\n\n", min_sq);

   // TODO 2
   double temp = arr[0];
   arr[0] = arr[1];
   arr[1] = temp;
   for (int i = 0; i < 8; i++)
   {
      printf("%.2f\n", arr[i]);
   }

   // TODO 3
   int res = sum_of_squares(13, 16, 40);
   printf("Sum of squares is: %d\n\n", res);

   // TODO 4
   double tri_arr[3] = {13, 16, 15}; // initializing the array with [3] to indicate the size
   double result[2];                 // initializing the array with [2] to indicate the size

   triangle(tri_arr, result); // call the function, shouldn't be triangle(tri_arr[3], result[2])
   printf("Calculating triangle with sides %.2f, %.2f, %.2f:\n", 13.0, 16.0, 15.0);
   printf("Circumference: %.2f, Area: %.2f\n", result[0], result[1]);

   tri_arr[2] = 40; // update 15 to 40, now an invalid triangle
   triangle(tri_arr, result);
   printf("Calculating triangle with sides %.2f, %.2f, %.2f:\n", 13.0, 16.0, 40.0);
   printf("Circumference: %.2f, Area: %.2f\n", result[0], result[1]);

   return 0;
}

int sum_of_squares(int a, int b, int c) // part of TODO 3
{
   return a * a + b * b + c * c;
   // or return pow(a, 2) + pow(b, 2) + pow(c, 2);
}

void triangle(double arr[], double result[]) // part of TODO 4
{
   double a = arr[0];
   double b = arr[1];
   double c = arr[2];

   if (a + b > c && a + c > b && b + c > a)
   {
      double s = (a + b + c) / 2.0;                      // semi-circumference
      result[0] = 2 * s;                                 // circumference
      result[1] = sqrt(s * (s - a) * (s - b) * (s - c)); // area
   }
   else // invalid triangle, force result[0] and result[1] to be 0
   {
      result[0] = 0;
      result[1] = 0;
   }
}

/** Classwork 14 TODO:

1. Write a loop to find the minimum square value of this following array and print the value
   double arr[8] = {-5, 9.5, 2, -1.34, 6, -7, 0.54, -4};

2. Swap the first two values -5 and 9.5, and then print the array one value per line
   using a loop.

3. Write a function to take 3 ints and return the sum of their squared values
   and call it in main() using 13, 16, 40. Make sure to write prototypes.

4. Write another function to take an array of 3 doubles, and another empty array of 2 doubles
   update the second array such that result[0] is the circumference and result[1] is the area
   if the 3 doubles cannot form a triangle, return circumference and area as 0
   Call it in main using arr[] = 13, 16, 15. Make sure to write prototypes.

5. Upload your scratch work (a picture file) on trace_HW3.c

Output of the program:

Minimum square value: 0.29

9.50
-5.00
2.00
-1.34
6.00
-7.00
0.54
-4.00

Sum of squares is: 2025

Calculating triangle with sides 13.00, 16.00, 15.00:
Circumference: 44.00, Area: 91.19
Calculating triangle with sides 13.00, 16.00, 40.00:
Circumference: 0.00, Area: 0.00

**/