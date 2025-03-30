#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
  /* 03/25's Content: Write/Append to File, Filename Checking
  ==============================================================
  */
  printf("03/25's Content: Write/Append to File, Filename Checking\n");
  printf("==============================================================\n");
  printf("Example of writing a string to text file:\n");

  FILE *filePointer;
  filePointer = fopen("output.txt", "w");

  if (filePointer == NULL)
  {
    printf("Error: Could not open file.\n");
    return 1;
  }

  int yint = 15.0;
  printf("%d is the value printed to console screen and file\n\n", yint);

  fprintf(filePointer, "%d is the value printed to console screen and file\n", yint);
  fprintf(filePointer, "Finished.\n");
  fclose(filePointer);

  printf("Example of appending a string to text file:\n");
  // it's totally okay to use a different FILE pointer
  FILE *filePointer2;
  filePointer2 = fopen("output.txt", "a"); // "a" is for appending

  if (filePointer2 == NULL)
  {
    printf("Error: Could not open file.\n");
    return 1;
  }

  fprintf(filePointer2, "This is an appended line.\n");
  printf("Text Added: This is an appended line.\n\n");
  fclose(filePointer2);

  printf("Example of file name error checking\n");
  // This time, we append to a file that user specifies its name
  FILE *filePointer3;
  char filename[100]; // Declare a long char array to store the filename

  do
  {
    printf("Please enter the name of the file to read first integer from: ");
    scanf("%s", filename);
    filePointer3 = fopen(filename, "r"); // try to open the file in append mode
  } while (filePointer3 == NULL); // Check if the file exists
  // If the file does not exist, the loop will continue to prompt for a new name

  // Read the first integer from the file and store at integer z
  int z;
  fscanf(filePointer3, "%d", &z);
  printf("The first integer in the file is %d\n\n", z);
  fclose(filePointer3); // Close the file

  /* 03/25's Content: Reading File to Array, 2D Array Example
  ==============================================================
  */
  printf("03/25's Content: Reading File to Array, 2D Array Example\n");
  printf("==============================================================\n");

  // Read an array of 6 grades from a file
  FILE *file_ptr;
  file_ptr = fopen("grades.txt", "r");

  // load it to a 1d array
  int grade_array[6], i, j;
  for (i = 0; i < 6; i++)
  {
    fscanf(file_ptr, "%d", &grade_array[i]);
  }
  fclose(file_ptr);

  file_ptr = fopen("grades.txt", "r"); // open it again
  // load it to a 2d array, 3 rows and 2 columns
  int grade_array_2d[3][2];
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      fscanf(file_ptr, "%d", &grade_array_2d[i][j]);
    }
  }
  fclose(file_ptr);

  // print the 2d array in a table format
  printf("Grade Array 2D of 3*2:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", grade_array_2d[i][j]);
    }
    printf("\n");
  }

  // Supposing there is another file called "unknown_grades.txt"
  // which contains a single column of grades, but unknown number of rows
  // we can read it to 1d array using a do-while loop on EOF

  file_ptr = fopen("unknown_grades.txt", "r"); // open the file

  int success = 1;
  i = 0;
  float sum = 0.0, average;
  int large_grade_array[1000];
  do
  {
    success = fscanf(file_ptr, "%d", &large_grade_array[i]);
    if (success != EOF) // this make sure we don't add the last EOF value to i or sum
    {
      sum += large_grade_array[i];
      i++;
    }
  } while (success != EOF); // or success != -1

  /**
  In short, it is do-while loop with EOF check:
  If the fscanf() reads successfully, it returns the number of items read
  and success will be non-zero.
  If it reaches the end of file (EOF), it returns EOF (which is -1)

  do {
  success = scanf...
  } while (success != EOF);

  A caveat: without the if-block inside the loop,
  we will end up adding the last EOF value to the sum
  and incrementing i unnecessarily


  // Another method with while-loop:

  while (success != EOF)
  {
    success = fscanf(file_ptr, "%d", &grade_array[i]);
    if (success != EOF)
    {
      sum += large_grade_array[i];
      i++;
    }
  }

  // Another method with while-loop together with a break statement:

  while (1)
  {
    success = fscanf(file_ptr, "%d", &large_grade_array[i]);
    if (success == EOF)
    {
      break;
    }
    sum += large_grade_array[i];
    i++;
  }
  */

  fclose(file_ptr);
  average = sum / i;
  printf("\nThere are %d grades in the file\n", i);
  printf("The average grade is %.2f\n\n", average);
  return 0;
}

/*
Output of the program:

03/25's Content: Write/Append to File, Filename Checking
==============================================================
Example of writing a string to text file:
15 is the value printed to console screen and file

Example of appending a string to text file:
Text Added: This is an appended line.

Example of file name error checking
Please enter the name of the file to read first integer from: random.txt
Please enter the name of the file to read first integer from: empty.txt
Please enter the name of the file to read first integer from: output.txt
The first integer in the file is 15

03/25's Content: Reading File to Array, 2D Array Example
==============================================================
Grade Array 2D of 3*2:
99	88
68	78
92	100

There are 521 grades in the file
The average grade is 76.42

Output in the file "output.txt":

15 is the value printed to console screen and file
Finished.
This is an appended line.

*/