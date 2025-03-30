#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Add an error checking here, you just learnt it
  
  // Read an array of 12 grades from a file

  // How to load it to a 1d array

  // How to load it to a 2d array, 4 rows and 3 columns

  // Then print the 2d array in a table format

  return 0;
}

// Hint:

// FILE *file_ptr;
// file_ptr = fopen("grades.txt", "r");

// int grade_array[6], i, j;
// for (i = 0; i < 6; i++)
// {
//   fscanf(file_ptr, "%d", &grade_array[i]);
// }
// fclose(file_ptr);

// file_ptr = fopen("grades.txt", "r");
// int grade_array_2d[3][2];
// for (i = 0; i < 3; i++)
// {
//   for (j = 0; j < 2; j++)
//   {
//     fscanf(file_ptr, "%d", &grade_array_2d[i][j]);
//   }
// }
// fclose(file_ptr);

// printf("Grade Array 2D of 3*2:\n");
// for (i = 0; i < 3; i++)
// {
//   for (j = 0; j < 2; j++)
//   {
//     printf("%d\t", grade_array_2d[i][j]);
//   }
//   printf("\n");
// }