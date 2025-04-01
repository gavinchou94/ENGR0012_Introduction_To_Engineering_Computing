#include <stdio.h>

int main()
{
  int arr[10] = {23, 45, 12, 56, 9, 34, 67, 89, 2, 15}; // Example array
  int min = arr[0];                                     // Assume the first element is the minimum

  // Loop through the array to find the minimum
  for (int i = 1; i < 10; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i]; // Update min if a smaller value is found
    }
  }

  printf("The minimum value in the array is: %d\n", min);

  // Bubble sort implementation
  for (int j = 0; j < 10; j++) // Outer loop for passes, or j<=9
  {
    for (int i = 0; i < 9; i++) // Inner loop for comparisons, more efficiently i<10-j-1
    {
      if (arr[i] > arr[i + 1]) // Swap if the current element is greater than the next
      {
        int temp = arr[i]; // Reserve a temporary variable
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }

  // Print the sorted array
  printf("The sorted array is: ");
  for (int j = 0; j < 10; j++)
  {
    printf("%d ", arr[j]);
  }
  printf("\n");

  return 0;
}