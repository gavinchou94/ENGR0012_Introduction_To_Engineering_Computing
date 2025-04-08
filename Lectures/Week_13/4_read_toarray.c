#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fileptr4;
  char filename[100];

  do
  {
    printf("please enter a file name:\n");
    scanf("%s", filename);
    fileptr4 = fopen(filename, "r"); // try to open the file in read mode
  } while (fileptr4 == NULL);

  // Read an array of 12 grades from a file
  int grades[12]; // Declare an array to hold 12 grades
  int max = 0;    // Initialize max to a small number
  for (int i = 0; i < 12; i++)
  {
    fscanf(fileptr4, "%d", &grades[i]); // Read each grade from the file
    // only one %d is needed
    // using for-loop so we can put into the array one by one

    // Below is how to find the maximum grade within the loop
    if (grades[i] > max)
    {
      max = grades[i];
    }
  }
  fclose(fileptr4);
  // Close the file after reading
  // since printing in the following would only need the grades[] array

  printf("The grades are:\n");
  for (int i = 0; i < 12; i++)
  {
    printf("%d\n", grades[i]);
  }
  printf("The maximum grade is %d\n\n", max);

  // Read a 2D array of grades from a file
  fileptr4 = fopen(filename, "r"); // Have to open the file again

  // Declare a 2D array to hold 4 rows and 3 columns of grades
  int grades_2d[4][3];
  for (int r = 0; r < 4; r++)
  {
    printf("We are now in row %d\n", r);
    for (int c = 0; c < 3; c++)
    {
      printf("We are now in column %d\n", c);
      fscanf(fileptr4, "%d", &grades_2d[r][c]);

      // Text file structures doesn't matter
      // the structure is decided by the program

      // If your text file looks like:
      // 1 2 3
      // 4 5 6 7 8
      // 9 10 11
      // 12
      // The above code will still work
    }
  }
  fclose(fileptr4);

  // Then print the 2d array in a table format on screen
  printf("\nThe grades in 2D array are:\n");
  for (int r = 0; r < 4; r++) // out loop is for row number
  {
    for (int c = 0; c < 3; c++) // inner loop is for column number
    {
      printf("%d\t", grades_2d[r][c]);
    }
    printf("\n");
  }

  return 0;
}

/* Output of the program:
please enter a file name:
grades.txt
The grades are:
99
88
78
92
100
78
78
89
65
82
86
67
The maximum grade is 100

We are now in row 0
We are now in column 0
We are now in column 1
We are now in column 2
We are now in row 1
We are now in column 0
We are now in column 1
We are now in column 2
We are now in row 2
We are now in column 0
We are now in column 1
We are now in column 2
We are now in row 3
We are now in column 0
We are now in column 1
We are now in column 2

The grades in 2D array are:
99	88	78
92	100	78
78	89	65
82	86	67
*/