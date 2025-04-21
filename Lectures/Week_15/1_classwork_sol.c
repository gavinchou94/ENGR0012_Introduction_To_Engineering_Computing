#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// prototypes
double calculateWeightedAverage();
void analyzeScores(int scores[][5], int threshold, char letter_grades[][5]);

int main()
{
  //------------------------------------------------------------------------
  //---------------------------- TODO 1 ------------------------------------
  //------------------------------------------------------------------------
  // Declare the grades matrix
  int grades[3][4] = {{85, 92, 78, 88}, {91, 73, 65, 94}, {76, 88, 59, 69}};
  char option;
  char letter[3][4];
  FILE *output_file_ptr;

  // Prompt the user for input
  printf("Enter A for Average or L for Letter Grade: ");
  scanf(" %c", &option);

  if (option == 'A')
  {
    // Open the file for writing
    output_file_ptr = fopen("grades_report.txt", "w");

    // Write the grades matrix and calculate averages
    for (int i = 0; i < 3; i++)
    {
      int sum = 0;
      for (int j = 0; j < 4; j++)
      {
        fprintf(output_file_ptr, "%d\t", grades[i][j]); // Write grades one by one, separated by tabs
        sum = sum + grades[i][j];                       // Calculate sum of grades of each row
      }
      fprintf(output_file_ptr, "%.2f\n", sum / 4.0); // Write average
    }

    fclose(output_file_ptr);
  }
  else if (option == 'L')
  {
    // Convert grades to letter grades
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        if (grades[i][j] >= 90)
        {
          letter[i][j] = 'A';
        }
        else if (grades[i][j] >= 80)
        {
          letter[i][j] = 'B';
        }
        else
        {
          letter[i][j] = 'C';
        }
      }
    }

    // Print the letter grade matrix
    printf("Letter Grade Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        printf("%c\t", letter[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Invalid option! Please enter A or L.\n");
  } // end if-elseif-else

  //------------------------------------------------------------------------
  //---------------------------- TODO 2 ------------------------------------
  //------------------------------------------------------------------------

  FILE *another_file;
  char filename[100]; // filename 

  // Filename error check
  do
  {
    printf("Please enter file name: \n");
    scanf("%s", &filename); //filename = 
    another_file = fopen(filename, "r"); //read mode
  } while (another_file == NULL); //undesired condition, 

  // Student ID input error check
  int studentID;
  do
  {
    printf("Please choose a student ID (from 1001, 1002, 1003 and 1004):\n");
    scanf("%d", &studentID);
  } while (studentID < 1001 || studentID > 1004); //undesired condition

  int success = 1, idx = 0, sum_hr = 0, weighted_sum = 0;
  int ID[100], hours[100], gds[100]; // assume you have no more than 100 rows

  // while-loop to find all entries related to this student ID
  while (success != EOF)
  {
    // scan from file every three numbers
    success = fscanf(another_file, "%d %d %d", &ID[idx], &hours[idx], &gds[idx]);
    if (success != EOF) //if here to avoid the last item to be read
    {
      if (ID[idx] == studentID)
      {
        sum_hr = sum_hr + hours[idx];
        weighted_sum = weighted_sum + hours[idx] * gds[idx];
      }
      idx = idx + 1;
    }
  }
  fclose(another_file); // Close the file after reading

  float weighted_avg = (weighted_sum + 0.0) / sum_hr;
  printf("The weighted average grade is %06.2f\n", weighted_avg);
  // if a function is built, call via weighted_avg = calculateWeightedAverage();

  //------------------------------------------------------------------------
  //---------------------------- TODO 3 ------------------------------------
  //------------------------------------------------------------------------

  int scores[2][5] = {{88, 94, 76, 67, 90}, {85, 73, 82, 79, 95}};
  char letter_grades[2][5];
  int number = 85;

  analyzeScores(scores, number, letter_grades);
  printf("Letter Grades Matrix:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%c\t", letter_grades[i][j]);
    }
    printf("\n");
  }
  return 0;
} // end main

double calculateWeightedAverage()
{
  FILE *another_file;
  char filename[100];

  // Filename error check
  do
  {
    printf("Please enter file name: \n");
    scanf("%s", filename);
    another_file = fopen(filename, "r");
  } while (another_file == NULL);

  // Student ID input error check
  int studentID;
  do
  {
    printf("Please choose a student ID (from 1001, 1002, 1003 and 1004):\n");
    scanf("%d", &studentID);
  } while (studentID < 1001 || studentID > 1004);

  int success = 1, idx = 0, sum_hr = 0, weighted_sum = 0;
  int ID[100], hours[100], gds[100]; // assume you have no more than 100 rows

  // for-loop to find all entries related to this student ID
  while (success != EOF)
  {
    // scan from file every three numbers
    success = fscanf(another_file, "%d %d %d", &ID[idx], &hours[idx], &gds[idx]);
    if (success != EOF)
    {
      if (ID[idx] == studentID)
      {
        sum_hr = sum_hr + hours[idx];
        weighted_sum = weighted_sum + hours[idx] * gds[idx];
      }
      idx = idx + 1;
    }
  }
  fclose(another_file); // Close the file after reading

  float weighted_avg = (weighted_sum + 0.0) / sum_hr;
  printf("The weighted average grade is %06.2f\n", weighted_avg);
  return weighted_avg;
} // end calculateWeightedAverage

void analyzeScores(int scores[][5], int threshold, char letter_grades[][5])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (scores[i][j] >= threshold)
      {
        letter_grades[i][j] = 'H';
      }
      else
      {
        letter_grades[i][j] = 'L';
      }
    }
  }
} // end analyzeScores