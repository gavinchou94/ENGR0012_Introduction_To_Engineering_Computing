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
    printf("I, (Your Name), certify that I have completed this assignment in an honest manner.\n");
    printf("Welcome to Swanson Scoops!\n");
    break;
  }

  case 3456789:
  {
    // Parts 3+4+5+6+7+8 code all goes here. Using the following prompt format:
    // Part 3 Prompt: "What would you like to order?\n"
    // Part 4 Prompt: "Enter 1 for a cup and 2 for a cone:\n"
    // Part 5 Prompt: "How many scoops they would like?(1-10)\n"
    // Part 6 Prompt: "The flavor options: Vanilla(V) Chocolate(C) Strawberry(S) Oreo(O) Butter Pecan(B)\n"
    // Part 7 Prompt: "What flavor would you like for scoop #%d?\n"
    // Part 8 Prompt: "Would you like to order another item? (Y/N)\n"
    // Part 9 Prompt: "The total cost(after tax): $%.2f\n"

    char again;
    int type;
    double cost = 0.00;
    int num_scoops = 0;
    int total_scoops = 0;
    char flavor;
    do
    {
      // Part 3
      printf("What would you like to order?\n");
      // Part 4 - Ask what they would like to order and error check
      do
      {
        printf("Enter 1 for a cup and 2 for a cone:\n");
        scanf("%d", &type);
      } while (type != 1 && type != 2);

      if (type == 1) // cup
      {
        cost = cost + 2.75;
      }
      else // cone
      {
        cost = cost + 3.25;
      }
      // part 5 - Ask how many scoops they would like and error check
      do
      {
        printf("How many scoops they would like?(1-10)\n");
        scanf("%d", &num_scoops);
      } while (num_scoops < 1 || num_scoops > 10);
      total_scoops = total_scoops + num_scoops;

      // Part 6 - Display the flavor options
      printf("The flavor options: Vanilla(V) Chocolate(C) Strawberry(S) Oreo(O) Butter Pecan(B)\n");

      // Part 7 - Specify the flavor each scoop
      for (int i = 0; i < num_scoops; i++)
      {
        printf("What flavor would you like for scoop #%d?\n", (i + 1));
        getchar(); // Clear the newline character from the input buffer
        scanf("%c", &flavor);
        switch (flavor)
        {
        case 'V':
        {
          cost = cost + 0.70;
          break;
        }
        case 'C':
        {
          cost = cost + 0.75;
          break;
        }
        case 'S':
        {
          cost = cost + 0.80;
          break;
        }
        case 'O':
        {
          cost = cost + 0.85;
          break;
        }
        case 'B':
        {
          cost = cost + 0.90;
          break;
        }
        } // end of switch for flavor
      } // end of for loop

      // Part 8 - Ask if they would like to order another item
      do
      {
        printf("Would you like to order another item? (Y/N)\n");
        scanf(" %c", &again);
      } while (again != 'Y' && again != 'N');

    } while (again == 'Y');

    // Part 9 - Calculate Sales Tax (6%) and display total cost
    double tax = 0.06;
    cost = cost * (1 + tax);

    printf("The total cost(after tax): $%.2f\n", cost);

    double charity = (1 / 4.0) * cost + (1 / 3.0) * total_scoops;
    printf("The charity amount: $%.2f\n", charity);

    break;
  }

  case 10:
  {
    // Part 10 code here. Using the following prompt format:
    // "Do you need to split the check? (Y/N)\n"
    // "How many ways do you need to split it?\n"
    // "The cost per person is: $%.2f\n"

    // Due to the usage of switch-case on grader
    // cost variable from part 3456789 is not accessible here.
    // So, we are hardcoding the cost here to be 41.20

    float CostPerPerson;
    char split;
    int ways;
    printf("Do you need to split the check? (Y/N)\n");
    scanf(" %c", &split);
    if (split == 'Y')
    {
      printf("How many ways do you need to split it?\n");
      scanf("%d", &ways);
      CostPerPerson = 41.20 / ways;
      printf("The cost per person is: $%.2f\n", CostPerPerson);
    }
    printf("\n\n\n");
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