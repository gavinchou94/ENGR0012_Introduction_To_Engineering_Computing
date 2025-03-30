#include <stdio.h>
#include <stdlib.h>

int main()
{
  // All the examples below are for error checking

  printf("Do-while-loop example of error checking (grade 0~100):\n");

  int grade; // Must declare grade before using it in scanf
  // Variable declaration must be before the do-while loop
  // if that variable is used in the loop condition
  do
  {
    printf("Enter the grade for the student: ");
    scanf("%d", &grade);
  } while (grade < 0 || grade > 100);

  printf("Do-while-loop example of error checking (small letters only):\n");
  char ch2 = '0'; // Initialize to a invalid value
  do
  {
    printf("Enter a char between a and z: ");
    scanf(" %c", &ch2); // Note the space before %c to ignore any whitespace
  } while (ch2 < 'a' || ch2 > 'z');
  printf("The valid char entered is %c\n\n", ch2);

  printf("While-loop example of error checking (enter A/B/C/F):\n");
  char LGrade2 = '0'; // Initialize to a invalid value
  while (LGrade2 != 'A' && LGrade2 != 'B' && LGrade2 != 'C' && LGrade2 != 'F')
  // Remember, the condition to put in the while loop is the undesired range.
  {
    printf("Enter the letter grade for the student: ");
    scanf(" %c", &LGrade2); // Note the space before %c
  }
  printf("The valid letter grade entered is %c\n\n", LGrade2);
}
/*
structure of do-while loop for error checking

MUST define var here
do
{
  printf and scanf to get the var value;
} while (var value is undesired);

example 1:

MUST define op here
do
{
  printf and scanf to get the var value;
} while (op != 'Y' && op != 'N');

example 2:

MUST define num here
do
{
  printf and scanf to get the var value;
} while (num < 10 || num > 100);
*/