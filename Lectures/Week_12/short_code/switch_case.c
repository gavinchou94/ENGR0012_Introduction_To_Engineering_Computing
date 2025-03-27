#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Declare variables
  char letterGrade;
  printf("Enter your letter grade (A, B, C, F): ");
  scanf(" %c", &letterGrade); // Note the space before %c
  switch (letterGrade)
  {
  case 'A': // The following code block will be executed if letterGrade=='A'
  {
    printf("Your GPA is 4.0\n");
    break; // Break is needed to exit the switch-case;
           // otherwise, it will also execute the default case if present
  }
  case 'B': // Always better to put the block inside {}
  {
    printf("Your GPA is 3.0\n");
    break;
  }
  case 'C':
  {
    printf("Your GPA is 2.0\n");
    break;
  }
  case 'F':
  {
    printf("Your new GPA is 0.0\n");
    break;
  }
  default: // Default case is optional but good to have
    printf("Not a valid letter grade\n");
  } // End of switch-case
}