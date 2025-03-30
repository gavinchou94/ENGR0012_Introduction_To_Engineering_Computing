#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Read a text file called "unknown_grades.txt"

  // How to load it to a 1d array without knowing the number of rows

  // How to also calculate the sum, average and min, diff between min and max.

  return 0;
}

/*
file_ptr = fopen("unknown_grades.txt", "r");

int success = 1;
i = 0;
float sum = 0.0, average;
int large_grade_array[1000];

do
{
  success = fscanf(file_ptr, "%d", &large_grade_array[i]);
  if (success != EOF)
  {
    sum += large_grade_array[i];
    i++;
  }
} while (success != EOF);

fclose(file_ptr);
average = sum / i;
printf("\nThere are %d grades in the file\n", i);
printf("The average grade is %.2f\n\n", average);

num_grades = i;
// Now we can also find the minimum grade
int min_grade = 0;

for(int j = 0; j < num_grades; j++)
{
  if (large_grade_array[j] < min_grade)
  {
    min_grade = large_grade_array[j];
  }
}
// same applied to find the max grade


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