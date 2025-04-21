#include <stdio.h>
#include <stdlib.h>

// put your function prototypes here
// TODO
void function1(void);
int function2(void);
double function3(double, double, char);
void function4(double, double, char, double);
void function5(int[], int, int[]);
void function6(int[], int, int[]);

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
    printf("I, (Your Name), certify that I have completed this assignment in an honest manner.\n");

    break; // DON'T REMOVE THE BREAK
  } // end case 0
  case 1:
  {
    // must call function1, cannot just printf here
    // f1 display format: "Date: 04/15/2025\nGroup 0012: First Last\n\nThe purpose of this program is to do some math and matrix operations\n"
    function1();

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
    char run_again;
    do
    {
      int choice = function2(); // call function2

      if (choice == 1)
      {
        // math operations
        double num1, num2;
        char operation;
        printf("Enter a value for the first number:\n");
        scanf("%lf", &num1);
        printf("Enter a value for the second number:\n");
        scanf("%lf", &num2);
        printf("Select the math operation to perform on the two numbers.\na - Addition\ns - Subtraction\nm - Multiplication\nd - Division:\nEnter char value for choice (a, s, m, or d):");
        scanf(" %c", &operation);
        while (operation != 'a' && operation != 's' && operation != 'm' && operation != 'd')
        {
          printf("ERROR: You must enter a, s, m, or, d!\nTry again:");
          scanf(" %c", &operation);
        }

        double result = function3(num1, num2, operation); // call function3
        function4(num1, num2, operation, result);         // call function4
      }
      else if (choice == 2)
      {
        // array
        int n;
        printf("How many elements would you like?\n");
        scanf("%d", &n);
        while (n < 1 || n > 5)
        {
          printf("Error! Enter a number between 1 and 5\n");
          scanf("%d", &n);
        }
        int arr[5] = {0, 0, 0, 0, 0};
        for (int i = 0; i < n; i++)
        {
          printf("Enter element in position %d\n", i);
          scanf("%d", &arr[i]);
        }
        int maxinfo[2] = {0, 0};
        function5(arr, n, maxinfo); // call function5
        function6(arr, n, maxinfo); // call function6
      }
      printf("Would you like to run this program again (y/n)?\n");
      scanf(" %c", &run_again);

      while (run_again != 'y' && run_again != 'Y' && run_again != 'n' && run_again != 'N')
      {
        printf("Error, please enter Y or N:\n");
        scanf(" %c", &run_again);
      }

    } while (run_again == 'y' || run_again == 'Y');

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
void function1(void)
{
  printf("Date: 04/15/2025\nGroup 0012: First Last\n\nThe purpose of this program is to do some math and matrix operations\n");
}

int function2(void)
{
  int choice;
  printf("Would you like to perform math operations or create an array?\n(1) Math operations\n(2) Array\nEnter integer value for choice (1 or 2):");
  scanf("%d", &choice);
  while (choice != 1 && choice != 2)
  {
    printf("ERROR: You must enter a 1 or 2!\nTry again:");
    scanf("%d", &choice);
  }
  return choice;
}

double function3(double num1, double num2, char operation)
{
  double result;
  switch (operation)
  {
  case 'a':
    result = num1 + num2;
    break;
  case 's':
    result = num1 - num2;
    break;
  case 'm':
    result = num1 * num2;
    break;
  case 'd':
    result = num1 / num2; // we just assume the user will not enter 0 for num2
    break;
  }
  return result;
}

void function4(double num1, double num2, char operation, double result)
{
  printf("The two values you entered were %lf and %lf\nOf the math operations a-add, s-subtract, m-multiply, d-divide, you chose: %c\n\nThe calculated result is %.2f\n", num1, num2, operation, result);
  FILE *output_file_ptr = fopen("results.txt", "a");
  fprintf(output_file_ptr, "The two values you entered were %lf and %lf\nOf the math operations a-add, s-subtract, m-multiply, d-divide, you chose: %c\n\nThe calculated result is %.2f\n", num1, num2, operation, result);
  fclose(output_file_ptr);
}

void function5(int arr[], int n, int maxinfo[])
{
  int max = arr[0];
  int index = 0;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      index = i;
    }
  }
  maxinfo[0] = max;
  maxinfo[1] = index;
}

void function6(int arr[], int n, int maxinfo[])
{
  FILE *output_file_ptr = fopen("results.txt", "a");
  printf("The array you entered is:\n");
  fprintf(output_file_ptr, "The array you entered is:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
    fprintf(output_file_ptr, "%d\t", arr[i]);
  }
  printf("\n");
  fprintf(output_file_ptr, "\n");

  printf("The maximum number is %d at location %d\n", maxinfo[0], maxinfo[1]);
  fprintf(output_file_ptr, "The maximum number is %d at location %d\n", maxinfo[0], maxinfo[1]);
  fclose(output_file_ptr);
}
// TODO