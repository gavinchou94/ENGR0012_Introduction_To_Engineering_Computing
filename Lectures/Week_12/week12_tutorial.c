#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
  printf("Example of writing a string to txt file:\n");

  FILE *filePointer;
  filePointer = fopen("output.txt", "w");

  if (filePointer == NULL)
  {
    printf("Error: Could not open file.\n");
    return 1;
  }

  int yint = 15.0;
  printf("%d is the value printed to console screen and file\n", yint);

  fprintf(filePointer, "%d is the value printed to console screen and file\n", yint);
  fprintf(filePointer, "Finished.\n");
  fclose(filePointer);

  //--------------------------------------------------------------

  printf("\nExamples of appending a string to txt file:\n");
  // it's totally okay to use a different FILE pointer
  FILE *filePointer2;
  filePointer2 = fopen("output.txt", "a"); // "a" is for appending

  if (filePointer2 == NULL)
  {
    printf("Error: Could not open file.\n");
    return 1;
  }

  fprintf(filePointer2, "This is an appended line.\n");
  printf("Text Added: This is an appended line.\n");
  fclose(filePointer2);

  //--------------------------------------------------------------

  printf("\nExamples of file name error checking\n");
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

  // Read the first integer from the file and store at z
  int z;
  fscanf(filePointer3, "%d", &z);
  printf("The first integer in the file is %d\n", z);
  // Close the file
  fclose(filePointer3);

  //--------------------------------------------------------------

  printf("\nQuiz 4 Review\n");

  int m = 40, n = 25;
  printf("The value of m is %d\n", m);
  printf("The value of n is %d\n", n);

  // Swap the values of i and j
  int temp = m;
  m = n;
  n = temp;

  printf("After swapping, the value of n is %d\n", n);
  // printf("After swapping, the value of n is %d\n", n);

  printf("m=%6d(R-A w=6)\n", m);  // 6 width, right aligned
  printf("m=%5d(R-A w=5)\n", m);  // 5 width, right aligned
  printf("m=%4d(R-A w=4)\n", m);  // 4 width, right aligned
  printf("m=%-4d(L-A w=4)\n", m); // 4 width, left aligned
  printf("m=%3d(R-A w=3)\n", m);  // 3 width, right aligned

  float p = m / 4.0;
  printf("p=%f(DEF-A dp=6)\n", p);             // default 6 decimal places, default aligned
  printf("p=%10f(R-A dp=6 w=10)\n", p);        // 10 width, default 6 decimal places, right aligned
  printf("p=%5.2f(R-A dp=2 w=5)\n", p);        // 5 width, 2 decimal places, right aligned
  printf("p=%7.4f(R-A dp=4 w=7)\n", p);        // 7 width, 4 decimal places, right aligned
  printf("p=%-8.3f(L-A dp=3 w=8)\n", p);       // 8 width, 3 decimal places, left aligned
  printf("p=%+8.2f(RSigned-A dp=2 w=8)\n", p); // 8 width, 2 decimal places, right aligned
  printf("p=%-10.1f(L-A dp=1 w=10)\n", p);     // 10 width, 1 decimal places, left aligned
  printf("p=%09.3f(Zero-A dp=3 w=9)\n\n", p);  // 9 width, 3 decimal places, default aligned with leading zeros

  // Summary of format specifiers with width and alignment

  // %x.yf : x width and y decimal places, right aligned
  // reserve x spaces and write from right,
  // last decimal positions go to the right
  // finish y decimal places, then numbers, then spaces to make it x-width

  // %+x.yf : show sign, right aligned, same as above
  // everything is the same as above, but show sign
  // if negative, show - sign, if positive, show + sign

  // %0x.yf : leading zeros, right aligned, same as above
  // everything is the same as above, but leading zeros
  // not using spaces to make it x-width, but using 0s
  // if negative, show - sign, if positive, does not show

  // %-x.yf : left aligned,
  // write from left, start from numbers, then y decimal places
  // last with spaces to make it x-width

  //--------------------------------------------------------------
  int a = 17, b = 10;
  int c, d;
  float s = 10.9, t;

  if (floor(s) < b)
  {
    printf("Inside block 1\n");
    t = b * s;
    d = a - b;
  }
  else if (floor(s) == b)
  {
    printf("Inside block 2\n");
    t = b / a;
    d = b - a;
  }
  else
  {
    printf("Inside block 3\n");
    t = b / s;
    d = a / b;
  }

  c = a % b;
  printf("p=%3d$\n", p);      // use $ at the end to measure the width
  printf("d=%-5d$\n", d);     // use $ at the end to measure the width
  printf("t=%-6.2f$\n\n", t); // use $ at the end to measure the width

  int i;
  int arr[5] = {2, 4, 6, 8, 10};
  int new_arr[7] = {5, 5, 5, 5, 5, 5, 5};

  for (i = 2; i < 6; i = i + 3)
  {
    new_arr[i] = arr[i - 2];
  }

  int j = 0;

  while (j < 6)
  {
    printf("%d\n", new_arr[j]);
    j = j + 1;
  }
  printf("z\nz\nz\nz\n\n");
  // if your output exceeds the given 8 lines
  // just show the first 8 lines

  //--------------------------------------------------------------
  // construct an int array of 8 element = 20, 25, 3, 25, 16, 30, 30, 79
  // how to write a for-loop to find the average of the array?
  // and print the average value!

  // first scanf two strings xxx and yyy
  // (e.g. CProgramming, C++Programming, Python, Java,
  // Matlab, Fortran, RLanguage, Julia)

  // then print:
  // I prefer to coding in xxx than yyy

  // if you choose xxx=CProgramming, then
  // print:
  // In my favorite language, M[1]=25
  // else if you choose xxx=Matlab, then
  // print:
  // In my favorite language, M[1]=20
  // else
  // print:
  // In my favorite language, M[1]=IDK

  // Hints: strcmp("Hello", "Hello") == 0
  // strcmp("Hello", "World") != 0

  // If we still have time:
  //--------------------------------------------------------------

  // Read an array of 6 grades from a file
  FILE *file_ptr;
  file_ptr = fopen("grades.txt", "r");
  // we can learn to error check later, assuming the file exists

  // load it to a 1d array
  int grade_array[6];
  for (i = 0; i < 6; i++)
  {
    fscanf(file_ptr, "%d", &grade_array[i]);
  }
  fclose(file_ptr);

  // open it again
  file_ptr = fopen("grades.txt", "r");

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

  //--------------------------------------------------------------

  // Supposing there is another file called "unknown_grades.txt"
  // which contains a single column of grades, but unknown number of rows
  // we can read it to 1d array using a do-while loop on EOF

  // open the file
  file_ptr = fopen("unknown_grades.txt", "r");

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

  // or
  // while (success != EOF)
  // {
  //   success = fscanf(file_ptr, "%d", &grade_array[i]);
  //   if (success != EOF)
  //   {
  //     sum += large_grade_array[i];
  //     i++;
  //   }
  // }

  // or
  // while (1)
  // {
  //   success = fscanf(file_ptr, "%d", &large_grade_array[i]);
  //   if (success == EOF)
  //   {
  //     break;
  //   }
  //   sum += large_grade_array[i];
  //   i++;
  // }

  fclose(file_ptr);
  average = sum / i;
  printf("\nThere are %d grades in the file\n", i);
  printf("The average grade is %.2f\n\n", average);
  return 0;
}