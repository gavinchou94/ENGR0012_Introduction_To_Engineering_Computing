#include <stdio.h>
#include <math.h>

int main()
{
  printf("Quiz 5 Part A Review\n");
  printf("==============================================================\n\n");

  char phrase[50] = "boldly, I bound beyond blue bridges";
  char proceed = 'y', retry = 'n';

  printf("Starting the sequence...\n");

  int p = 72, q = 9, r = 121, s = 0, t, arr[6] = {15, 27, 39, 51, 63, 75};

  do
  {
    t = p / 3;

    switch (s)
    {
    case 3:
      printf("In case 3 now\n");
      t = pow(t - 14, 2);
      printf("t is now %d\n", t);
      proceed = 'y';
      break;

    case 0:
      printf("Handling base case\n");
      t = 0;
      printf("t is %d\n", t);
      proceed = 'y';
      break;

    case 4:
      printf("Executing case 4\n");
      t = p % q;
      arr[s] = sqrt(r);
      printf("t is %d\n", t);
      printf("Array snapshot: ");
      for (int i = 4; i >= 0; i = i - 2)
      {
        printf("%d ", arr[i]);
      }
      printf("\n");
      proceed = 'z';
      break;

    case 2:
      printf("Inside case 2\n");
      t = t + r;
      printf("t is now %d\n", t);
      proceed = phrase[5];
      break;

    default:
      printf("Default case active\n");
      t = r / q;
      proceed = phrase[18];
      printf("t is %d\n", t);
    }

    s = s + 1;
    retry = proceed;

  } while (retry == 'y');

  printf("Final value of s: %d\n\n", s);

  printf("Classwork from Tuesday: Optional 5 Print 2 3 6 18 108 etc\n");
  printf("==============================================================\n");

  int a, b;
  printf("Enter number a: ");
  scanf("%d", &a); // a=2
  printf("Enter number b: ");
  scanf("%d", &b); // b=3
  printf("\n\n");
  int iteration = 0;

  printf("it\tprod\n");
  printf("--------------\n");

  printf("%d\t%d\n", iteration, a); // a=2

  iteration++;
  printf("%d\t%d\n", iteration, b); // b=3

  int c = a * b;
  iteration++;
  printf("%d\t%d\n", iteration, c); // c=6=2*3

  while (c < 9999999)
  {
    a = b;       // Update first multiplicand to the second from the previous iteration
    b = c;       // Update second multiplicand to the product from the previous iteration
    c = a * b;   // Calculate the new product
    iteration++; // Increment the iteration counter
    printf("%d\t%d\n", iteration, c);
  }

  printf("\nFind the standard deviation of an array\n");
  printf("==============================================================\n");

  int newarr[10] = {23, 45, 12, 56, 9, 34, 67, 89, 2, 15};

  int sum = 0;
  for (int i = 0; i < 10; i++)
  {
    sum += newarr[i]; // Add each element to the sum
  }
  double average = (sum + 0.0) / 10; // avoid integer division

  double result = 0;
  for (int i = 0; i < 10; i++)
  {
    result = result + (newarr[i] - average) * (newarr[i] - average); // or using pow()
  }
  double stddev = result / 9; // Sample standard deviation, divide by n-1

  printf("The average is: %.2f\n", average);
  printf("The standard deviation is: %.2f\n\n", stddev);

  printf("Create an output array of same size to store new information\n");
  printf("==============================================================\n");
  // Assuming we know that file "unknown_grades.txt" contains 521 grades
  // Read it to an 1d array first, then create another char array to hold the letter grades

  // letter grades are A, B, C, D, F (based on grade>90, 80, 70, 60)
  // write the letter grade array into a file called "letter_grades.txt"

  // we also need to know how many students get above B grade and
  // the percentage of B-above's

  FILE *fileptr6;

  fileptr6 = fopen("unknown_grades.txt", "r");
  int grade_array[521];
  char letter_grades[521];
  int B_above_count = 0;

  for (int i = 0; i < 521; i++)
  {
    fscanf(fileptr6, "%d", &grade_array[i]); // Read each grade from the file

    int current_grade = grade_array[i];

    if (current_grade >= 80)
    {
      B_above_count++; // Count the number of students with grades in the B category
    }

    char current_letter_grade;
    if (current_grade >= 90)
    {
      current_letter_grade = 'A';
    }
    else if (current_grade >= 80)
    {
      current_letter_grade = 'B';
    }
    else if (current_grade >= 70)
    {
      current_letter_grade = 'C';
    }
    else if (current_grade >= 60)
    {
      current_letter_grade = 'D';
    }
    else
    {
      current_letter_grade = 'F';
    }
    letter_grades[i] = current_letter_grade; // Store the letter grade in the array
  }
  fclose(fileptr6); // Close the file after reading

  // Now, write the letter grades to a new file
  FILE *output_file;
  output_file = fopen("letter_grades.txt", "w");
  if (output_file == NULL)
  {
    printf("Error: Could not open output file.\n");
    return 1; // Exit with an error code
  }
  for (int i = 0; i < 521; i++)
  {
    fprintf(output_file, "%c\n", letter_grades[i]);
    // Write each letter grade to the file
  }
  fclose(output_file); // Close the output file

  printf("The number of students with grades above B: %d\n", B_above_count);
  double percentage_B_above = (B_above_count / 521.0) * 100; // Calculate the percentage
  printf("Percentage of students with grades above B: %.2f%%\n\n", percentage_B_above);

  printf("Load an irregular text file to 2d array\n");
  printf("==============================================================\n");

  // If your text file looks like:
  // 1 2 3
  // 4 5 6 7 8
  // 9 10 11
  // 12
  // The above code will still work

  // Read the file into a 2D array of 3*4
  FILE *fileptr;
  char filename[100] = "random.txt";

  fileptr = fopen(filename, "r"); // try to open the file in read mode

  int new_grid[3][4];

  for (int j = 0; j < 3; j++)
  {
    for (int i = 0; i < 4; i++)
    {
      fscanf(fileptr, "%d", &new_grid[j][i]);
    } // Read the first element into first row first col
  }
  fclose(fileptr);

  // Print the 2D array
  printf("The 2D array is:\n");
  for (int j = 0; j < 3; j++)
  {
    for (int i = 0; i < 4; i++)
    {
      printf("%d ", new_grid[j][i]);
    }
    printf("\n");
  }
  printf("\n");
}