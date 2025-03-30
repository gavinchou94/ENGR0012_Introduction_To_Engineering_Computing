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

    // TODO

    break; // DON'T REMOVE THIS BREAK
  }
  case 2:
  {
    // Part 2 code goes here. Ask the user for a file name and error check indefinitely.
    // Part 2 Prompt: "Please enter file name:\n"

    // TODO

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
    // Here you have to do it again without error checking, like:
    FILE *input_file_ptr = fopen("1930_2001.txt", "r"); // DON'T REMOVE IT

    // TODO

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

/**
 * Your code will be also manually graded for the following:
 *
 * A. Include a comment with your name at the top.
 * B. Include descriptive comments, indentation, and whitespace so that your program is neat and understandable to anyone who reads it.
 *
 * C. 4f comment here answer these questions: (1)How would you compare the daily high temperatures in
 *    Pittsburgh in 1930 to the daily high temperatures in 2001? How are they similar or different? (2) Look up some of
 *    the daily high temperatures in 2021. How do they compare to the daily high temperatures in 1930 and 2001?
 *
 * Your answer: TODO
 *
 * D. 3a/3b, paste your commented code in 3a/3b here, one of the above two
 * approaches to read in the data (this was so that you could practice both ways of reading the data!)
 *
 * Your answer: TODO
 *
 * E. If you use AI tools, please submit a copy of your prompt(s) and the AI response(s).
 * F. If you did not use AI tools, please include a statement/comment at the top of your file indicating that you did not use AI when completing your assignment.
 */