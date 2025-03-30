#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Examples of finding the sum of an array with known size and elements
  int arr[5] = {2, 4, 6, 8, 10};

  // Method 1: Using a for loop
  int sum1 = 0;
  for (int i = 0; i < 5; i++) // or using i<=4
  {
    sum1 = sum1 + arr[i];
  }
  printf("Sum of the array using for loop: %d\n", sum1);

  // Method 2: Using a while loop
  int sum2 = 0, j = 0;
  while (j < 5)
  {
    sum2 = sum2 + arr[j];
    j++;
  }
  printf("Sum of the array using while loop: %d\n", sum2);

  // Method 3: Using a do-while loop
  int sum3 = 0, k = 0;
  do
  {
    sum3 = sum3 + arr[k];
    k++;
  } while (k < 5);
  printf("Sum of the array using do-while loop: %d\n", sum3);

  // Advanced example of finding the sum of an array with known size
  // but elements are from user input
  int grades[5];
  int sum4 = 0;
  printf("Enter 5 grades:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Grade %d: ", i + 1);
    scanf("%d", &grades[i]);
    sum4 = sum4 + grades[i];
  }
  printf("Sum of the grades: %d\n", sum4);

  // Advanced example of finding the sum of a 2d array
  int arr2d[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}};
  int sum5 = 0;
  for (int r = 0; r < 3; r++)
  {
    for (int c = 0; c < 4; c++)
    {
      sum5 = sum5 + arr2d[r][c];
    }
  }
  printf("Sum of the 2D array: %d\n", sum5);
}