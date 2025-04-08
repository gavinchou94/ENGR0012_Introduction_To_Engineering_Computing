#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Read a text file called "unknown_grades.txt"
  FILE *fileptr6;
  fileptr6 = fopen("unknown_grades.txt", "r");

  int long_grade_array[1000]; // Declare a very long array to hold the grades
                              // Assuming the file has at most 1000 grades
  int index = 0;
  int check; // check for EOF, if fscanf is successful, it returns 1
             // if it fails, it returns EOF (EOF equal to -1)
  int sum = 0;
  int min = 100; // Initialize min to a large number

  do
  {
    // instead of using a for-loop and incrementing i
    // we can use a do-while loop and increment index until EOF
    check = fscanf(fileptr6, "%d", &long_grade_array[index]);
    if (check != EOF) // this if-part is only to avoid the last item being added
    {
      sum = sum + long_grade_array[index]; // keep a running sum

      // Update the minimum grade within the loop
      if (long_grade_array[index] < min)
      {
        min = long_grade_array[index];
      }

      index = index + 1; // increment the index
    }
  } while (check != EOF); // or check != -1
  // don't forget the ; at the end of the do-while loop

  fclose(fileptr6); // Close the file after reading

  // After reading, index will be the number of grades read
  // long_grade_array[] holds the grades
  // so we can safely close the file now

  // Print the information
  printf("The number of grades in the file is %d\n", index);
  printf("The first five grades are:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", long_grade_array[i]);
  }
  printf("The last five grades are:\n");
  for (int i = index - 5; i < index; i++)
  {
    printf("%d\n", long_grade_array[i]);
  }
  double average = (sum + 0.0) / index;
  // +0.0 to convert to double and avoid integer division
  printf("The average grade is %.2f\n", average);
  printf("The minimum grade is %d\n", min);

  return 0;
}

/* Another method with while-loop together with a break statement:

while (1)
{
  success = fscanf(file_ptr, "%d", &large_grade_array[i]);
  if (success == EOF)
  {
    break; // Break out of the loop if EOF is reached
  }
  sum += large_grade_array[i];
  i++;
}

*/