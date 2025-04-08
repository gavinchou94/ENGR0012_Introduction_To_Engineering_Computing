#include <stdio.h>
#include <stdlib.h>

// put your function prototypes here

// TODO

int main()
{
  int part;

  // For grading purposes to allow partial credit
  // just put your code inside each corresponding case
  // 0 - display integrity statement
  // 1 - call your function1 to display
  // 23456 - the rest of the code goes here

  printf("Which part of HW10 do you want to test?\n");
  printf("(Only choose 0 or 1 or 23456)\n");
  scanf("%d", &part);

  switch (part)
  {
  case 0:
  {
    // Display integrity statement

    // TODO

    break; // DON'T REMOVE THE BREAK
  } // end case 0
  case 1:
  {
    // must call function1, cannot just printf here
    // f1 display format: "Date: 04/15/2025\nGroup 0012: First Last\n\nThe purpose of this program is to do some math and matrix operations\n"

    // TODO

    break; // DON'T REMOVE THE BREAK
  } // end case 1
  case 23456:
  {
    // Other code all goes here. Remember to design run-again;
    // Using the following format:

    // f2 display: "Would you like to perform math operations or create an array?\n(1) Math operations\n(2) Array\nEnter integer value for choice (1 or 2):"
    // f2 display when use gives invalid input: "ERROR: You must enter a 1 or 2!\nTry again:"

    // main-related display: "Enter a value for the first number:\n"
    // main-related display: "Enter a value for the second number:\n"
    // main-related display: "Select the math operation to perform on the two numbers.\na - Addition\ns - Subtraction\nm - Multiplication\nd - Division:\nEnter char value for choice (a, s, m, or d):"
    // main-related display when user gives invalid input: "ERROR: You must enter a, s, m, or, d!\nTry again:"

    // f4 display: "The two values you entered were %lf and %lf\nOf the math operations a-add, s-subtract, m-multiply, d-divide, you chose: %c\n\nThe calculated result is %.2f\n"

    // main-related display: "How many elements would you like?"
    // main-related display when user gives invalid input: "Error! Enter a number between 1 and 5\n"
    // main-related display: "Enter element in position xx\n"

    // f6 display: "The array you entered is:\n%d\t%d\t...\n" [HINTS: use a for loop to finish this]
    // f6 display: "The maximum number is %d at location %d\n"

    // main-related display: "Would you like to run this program again (y/n)?"
    // main-related display when user gives invalid input: "Error, please enter Y or N:"

    // TODO

    break; // DON'T REMOVE THE BREAK
  } // end case 23456
  default:
  {
    printf("Invalid part selected.\n");
    break;
  } // end default
  } // end switch
  return 0; // end main
}

// your 6 functions go here

// TODO