#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
int isTriangle(int a, int b, int c);
int accurateShape(int a, int b, int c, int type);
float AssessStudent(int id[], int sides[][3], int numSubmissions);
void MatrixProcess(char option, float result[][5], int id[], int sides[][3], int shape[], int numSubmissions);

int main()
{
  // Display integrity statement
  printf("Pittsburgh Public School Geometry Assessment Program \\ Code 100%% prepared by [YourName] \\ No A.I. Used\n");

  // Prompt for filename
  char filename[100];
  printf("Enter your filename that stores students' submissions: ");
  scanf("%s", filename);

  // Open file and error check
  FILE *file = fopen(filename, "r");
  while (file == NULL)
  {
    printf("Error opening file. Please enter a valid filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
  }

  // Read data from file
  int id[100], sides[100][3], shape[100];
  int numSubmissions = 0;
  int check = 0;

  // Read until EOF
  while (check != EOF)
  {
    check = fscanf(file, "%d %d %d %d %d", &id[numSubmissions], &sides[numSubmissions][0], &sides[numSubmissions][1], &sides[numSubmissions][2], &shape[numSubmissions]);
    if (check != -1)
    {
      numSubmissions++;
    }
  }
  fclose(file); // Close the file after reading

  // Call AssessStudent function
  float result = AssessStudent(id, sides, numSubmissions);
  printf("The triangle-inequality accuracy of the selected student is %.2f\n", result);

  // Create result matrix
  float resultMatrix[2][5] = {
      {0.72, 0.94, 0.83, 0.89, 0.95},
      {0.60, 0.60, 0.60, 0.60, 0.60}};

  // Prompt for option
  char option;
  printf("Enter L for letter evaluation or C for data correction: ");
  scanf(" %c", &option);
  // Call MatrixProcess function
  MatrixProcess(option, resultMatrix, id, sides, shape, numSubmissions);
  // If option is C, append "Data Updated!" to letters.txt
  if (option == 'C')
  {
    // for (int i = 0; i < 2; i++)
    // {
    //   for (int j = 0; j < 5; j++)
    //   {
    //     printf("%.2f ", resultMatrix[i][j]);
    //   }
    //   printf("\n");
    // }
    FILE *output_file_ptr = fopen("letters.txt", "a");
    fprintf(output_file_ptr, "Data Updated, Calculate Again\n");
    fclose(output_file_ptr);
  }
  // Close all files

  // End of program
  return 0;
}

float AssessStudent(int id[], int sides[][3], int numSubmissions)
{
  int studentID;
  float accuracy = 0.0;
  int correctCount = 0;
  int totalCount = 0;

  // Ask for student ID
  printf("Enter a student ID (4201, 4202, 4203, 4204, 4205): ");
  scanf("%d", &studentID);
  // Error check for valid student ID
  while (studentID < 4201 || studentID > 4205)
  {
    printf("Invalid ID. Please enter a valid student ID: ");
    scanf("%d", &studentID);
  }

  // Calculate accuracy
  for (int i = 0; i < numSubmissions; i++)
  {
    if (id[i] == studentID) // if first column matches
    {
      // Check if the sides form a triangle
      if (isTriangle(sides[i][0], sides[i][1], sides[i][2]))
      {
        correctCount++;
      }
      totalCount++; // Increment total count for this student
    }
  }
  accuracy = (correctCount + 0.0) / totalCount; // Calculate accuracy
  return accuracy;
}

int isTriangle(int a, int b, int c)
{
  if (a + b > c && a + c > b && b + c > a)
  {
    return 1; // is a triangle
  }
  else
  {
    return 0; // is not a triangle
  }
}

void MatrixProcess(char option, float result[][5], int id[], int sides[][3], int shape[], int numSubmissions)
{
  if (option == 'L')
  {
    // Write to letters.txt
    FILE *output_file_ptr = fopen("letters.txt", "w");
    fprintf(output_file_ptr, "\"triangle inequality\" in first row, \"shape categorizing\" in second row:\n");

    for (int i = 0; i < 2; i++) // loop two rows
    {
      for (int j = 0; j < 5; j++) // loop through each student
      {
        if (result[i][j] >= 0.85)
        {
          fprintf(output_file_ptr, "P ");
        }
        else
        {
          fprintf(output_file_ptr, "F ");
        }
      }
      fprintf(output_file_ptr, "\n");
    }
  }
  else if (option == 'C')
  {
    for (int i = 0; i < 5; i++) // loop through each student
    {
      // Calculate accuracy for shape categorization
      int correctCount = 0;
      int totalCount = 0;

      for (int j = 0; j < numSubmissions; j++)
      {
        if (id[j] == i + 4201) // find the student ID
        {
          if (accurateShape(sides[j][0], sides[j][1], sides[j][2], shape[j]) == 1)
          {
            correctCount++;
          }
          totalCount++; // Increment total count for this student
        }
      }
      result[1][i] = (correctCount + 0.0) / totalCount; // Update the second row with accuracy
    }
  }
}

int accurateShape(int a, int b, int c, int type)
{
  // Determine the largest side
  int largest = a;
  if (b > largest)
  {
    largest = b;
  }
  if (c > largest)
  {
    largest = c;
  }

  // Check the type of triangle
  int result = 2 * largest * largest - (a * a + b * b + c * c);

  if (result < 0)
  {
    if (type == 1)
    {
      return 1; // Acute, student is correct
    }
    else
    {
      return 0; // Not acute
    }
  }
  else if (result == 0)
  {
    if (type == 0)
    {
      return 1; // Right, student is correct
    }
    else
    {
      return 0; // Not right
    }
  }
  else
  {
    if (type == -1)
    {
      return 1; // Obtuse, student is correct
    }
    else
    {
      return 0; // Not obtuse
    }
  }
}