#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int part;
  // For grading purposes to allow partial credit
  // just put your code inside each corresponding case
  printf("Which part of HW9 do you want to test?\n");
  printf("(Only choose 1 or 2 or 34)\n");
  scanf("%d", &part);

  switch (part)
  {
  case 1:
  {
    // Part 1 code goes here. Add \n after each print.
    // 1. Display integrity statement
    printf("I, (Your Name), certify that I have completed this assignment in an honest manner.\n");
    break; // DON'T REMOVE THIS BREAK
  }
  case 2:
  {
    // Part 2 code goes here. Ask the user for a file name and error check indefinitely.
    // Part 2 Prompt: "Please enter file name:\n"

    char filename[50];
    FILE *input_file_ptr;
    do
    {
      printf("Please enter file name:\n");
      scanf("%s", filename); // Use %s for string input
      input_file_ptr = fopen(filename, "r");
    } while (input_file_ptr == NULL);
    break; // DON'T REMOVE THIS BREAK
  }
  case 34:
  {
    // Parts 3+4 code all goes here
    // Part 4a output format: "Temperatures on Day %d in 1930 = %d\t2001 = %d\n"
    // Part 4a~4b gap format: "**************\n\n"
    // Part 4b output format: "The average temp for 1930 is: %.4f\nThe average temp for 2001 is: %8.4f\n"
    // Part 4c output format: "The min temp for 1930 is: %d\nThe min temp for 2001 is: %d\n"
    //                        "The max temp for 1930 is: %d\nThe max temp for 2001 is: %d\n"
    // Part 4e output format: "The min difference between 1930 and 2001 is: %d\n"
    //                        "The max difference between 1930 and 2001 is: %d\n"
    // Part 4b (std)  format: "The standard deviation for 1930 is: %8.4f\nThe standard deviation for 2001 is: %8.4f\n"

    // Due to the usage of switch-case on grader, your part 2 opened file is closed
    // Here you can just do it again without error checking, like:
    FILE *input_file_ptr = fopen("1930_2001.txt", "r");

    int n = 365, temp[400][2], i, min0, min1, min_diff, max0, max1, max_diff, diff[400];
    double sum0 = 0, sum1 = 0, ave0, ave1, std0, std1;
    char filename[50];
    // FILE *input_file_ptr;
    FILE *output_file_ptr;

    output_file_ptr = fopen("results.txt", "w");

    // Read in data using fscanf
    int check;
    i = 0;
    do
    {
      check = fscanf(input_file_ptr, "%d %d", &temp[i][0], &temp[i][1]);
      if (check != EOF) // Break if end of file
      {
        printf("Temperatures on Day %d in 1930 = %d\t2001 = %d\n", i + 1, temp[i][0], temp[i][1]);
        fprintf(output_file_ptr, "Temperatures on Day %d in 1930 = %d\t2001 = %d\n", i + 1, temp[i][0], temp[i][1]);
      }
      i++;
    } while (check != EOF);

    // Read in data, get sums and differences
    for (i = 0; i < n; i++)
    {
      sum0 += temp[i][0];                     // Sum 1930 data
      sum1 += temp[i][1];                     // Sum 2001 data
      diff[i] = abs(temp[i][0] - temp[i][1]); // Find difference
    }

    // Find averages
    ave0 = sum0 / n;
    ave1 = sum1 / n;
    printf("**************\n\n");
    fprintf(output_file_ptr, "**************\n\n");
    printf("The average temp for 1930 is: %8.4f\nThe average temp for 2001 is: %8.4f\n", ave0, ave1);
    fprintf(output_file_ptr, "The average temp for 1930 is: %8.4f\nThe average temp for 2001 is: %8.4f\n", ave0, ave1);

    // Find min, max, and standard deviation
    min0 = temp[0][0];
    min1 = temp[0][1];
    max0 = temp[0][0];
    max1 = temp[0][1];
    min_diff = diff[0];
    max_diff = diff[0];
    sum0 = 0;
    sum1 = 0;

    for (i = 0; i < n; i++)
    {
      // Find min and max
      if (temp[i][0] < min0)
        min0 = temp[i][0]; // Min 1930
      if (temp[i][1] < min1)
        min1 = temp[i][1]; // Min 2001
      if (temp[i][0] > max0)
        max0 = temp[i][0]; // Max 1930
      if (temp[i][1] > max1)
        max1 = temp[i][1]; // Max 2001
      if (diff[i] < min_diff)
        min_diff = diff[i]; // Min difference
      if (diff[i] > max_diff)
        max_diff = diff[i]; // Max difference

      // Calculate sum for standard deviation
      sum0 += (temp[i][0] - ave0) * (temp[i][0] - ave0);
      sum1 += (temp[i][1] - ave1) * (temp[i][1] - ave1);
    }

    std0 = sqrt(sum0 / (n - 1));
    std1 = sqrt(sum1 / (n - 1));

    // Print results
    printf("The min temp for 1930 is: %d\nThe min temp for 2001 is: %d\n", min0, min1);
    printf("The max temp for 1930 is: %d\nThe max temp for 2001 is: %d\n", max0, max1);
    printf("The min difference between 1930 and 2001 is: %d\n", min_diff);
    printf("The max difference between 1930 and 2001 is: %d\n", max_diff);
    printf("The standard deviation for 1930 is: %8.4f\nThe standard deviation for 2001 is: %8.4f\n", std0, std1);

    fprintf(output_file_ptr, "The min temp for 1930 is: %d\nThe min temp for 2001 is: %d\n", min0, min1);
    fprintf(output_file_ptr, "The max temp for 1930 is: %d\nThe max temp for 2001 is: %d\n", max0, max1);
    fprintf(output_file_ptr, "The min difference between 1930 and 2001 is: %d\n", min_diff);
    fprintf(output_file_ptr, "The max difference between 1930 and 2001 is: %d\n", max_diff);
    fprintf(output_file_ptr, "The standard deviation for 1930 is: %8.4f\nThe standard deviation for 2001 is: %8.4f\n", std0, std1);

    // Close files
    fclose(input_file_ptr);
    fclose(output_file_ptr);

    break; // DON'T REMOVE THIS BREAK
  } // End of case 34

  default:
  {
    printf("Invalid part selected.\n");
    return 1;
  } // End of default case
  } // End of switch of part
  return 0;
} // End of main function