#include <stdio.h>

int main()
{
  int arr[10] = {23, 45, 12, 56, 9, 34, 67, 89, 2, 15}; // Example array
  // Assume the first element is the minimum
  int min = arr[0];

  // Loop through the array to find the minimum
  for (int i = 1; i < 10; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i]; // Update min if a smaller value is found
    }
  }

  // use a while loop to find the maximum
  int max = arr[0];
  int index = 0;
  while (index < 10)
  {
    if (arr[index] > max)
    {
      max = arr[index];
    }
    index++;
  }
  printf("The max value in the array is: %d\n", max);

  // Bubble sort implementation
  for (int j = 0; j < 10; j++) // Outer loop for passes, we need to have 10 passed, or j<=9
  {
    for (int i = 0; i < 9; i++) // Inner loop for comparisons, we need to have 9 comparisons in each pass, more efficiently i<10-j-1
    {
      if (arr[i] > arr[i + 1]) // Swap if the current element is greater than the next
      {
        int temp = arr[i]; // Reserve a temporary variable
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }

  // Structure of swap two elements using a, b, and temp
  // int temp = a;
  // a = b;
  // b = temp;

  // Print the sorted array
  printf("The sorted array is: ");
  for (int j = 0; j < 10; j++)
  {
    printf("%d ", arr[j]);
  }
  printf("\n");
}