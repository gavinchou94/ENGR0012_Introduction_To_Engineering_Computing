#include <stdio.h>
#include <stdlib.h>

int main()
{
  int part;
  // For grading purposes to allow partial credit
  // just put your code inside each corresponding case
  printf("Which part of HW8 do you want to test?\n");
  printf("(Only choose 12 or 3456789 or 10)\n");
  scanf("%d", &part);

  switch (part)
  {
  case 12:
  {
    // Part 1+2 code goes here. Add \n after each part.
    // 1. Display integrity statement
    // 2. Display welcome message

    // TODO

    break;
  }

  case 3456789:
  {
    // Parts 3+4+5+6+7+8+9 code all goes here. Using the following prompt format:
    // Part 3 Prompt: "What would you like to order?\n"
    // Part 4 Prompt: "Enter 1 for a cup and 2 for a cone:\n"
    // Part 5 Prompt: "How many scoops they would like?(1-10)\n"
    // Part 6 Prompt: "The flavor options: Vanilla(V) Chocolate(C) Strawberry(S) Oreo(O) Butter Pecan(B)\n"
    // Part 7 Prompt: "What flavor would you like for scoop #%d?\n"
    // Part 8 Prompt: "Would you like to order another item? (Y/N)\n"
    // Part 9 Prompt: "The total cost(after tax): $%.2f\n"

    // TODO

    break;
  }

  case 10:
  {
    // Part 10 code goes here. Using the following prompt format:
    // "Do you need to split the check? (Y/N)\n"
    // "How many ways do you need to split it?\n"
    // "The cost per person is: $%.2f\n"

    // Due to the usage of switch-case on grader
    // cost variable from part 3456789 is not accessible here.
    // So, we are hardcoding the cost here to be 41.20

    // TODO

    break;
  }

  default:
  {
    printf("Invalid part selected.\n");
    return 1; // Exit with error
  }
  } // End of switch of part
  return 0;
}

/**
 * Your code will be also manually graded for the following:
 *
 * A. Include a comment with your name at the top.
 *
 * B. Include descriptive comments, indentation, and whitespace so that your program is neat and understandable to anyone who reads it.
 *
 * C. This is an individual submission. Please just name your file as hw8.c (other names would run into error) and submit through the link.
 *
 * D. If you use AI tools, please submit a copy of your prompt(s) and the AI response(s).
 *
 * E. If you did not use AI tools, please include a statement/comment at the top of your file indicating that you did not use AI when completing your assignment.
 *
 */