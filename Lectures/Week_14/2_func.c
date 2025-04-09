#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
void func1(void);                  // Function with no parameters and no return value
void func2(int, int);              // Function with two parameters and no return value
double func3(void);                // Function with no parameters and a return value
double func4(int, double, double); // Function with three parameters and a return value
void integrity(void);
void printname(char, char);
int cube_add(int, int);

int main()
{
  // Call func1
  func1();

  // call a function to print an integrity statement
  integrity();

  // call a function to print your two initials
  char op = 'L', op2 = 'A';
  printname(op, op2);

  // Call func2 with two arguments
  func2(5, 10);

  // or you can do this
  // int x=5, y=10;
  // func2(x, y);

  // Call func3 and store its return value
  double result1 = func3();
  printf("Result from func3: %.2f\n", result1);

  // Call func4 with two arguments and store its return value
  // When you call it, make sure (1) order of parameters is correct
  // and (2) types of parameters are correct
  double a = 5.5, b = 10.5;
  double result2 = func4(10, a, b);
  printf("Result from func4: %.2f\n", result2); // it would be just (10+a-b)*1.5

  int result3;
  int x = 4, y = 6;
  result3 = cube_add(x, y); // Call the function and store the result

  // Variables passed to/from the function and main do not need to have the same variable names
  // the program will look at the order of the variables, not the names

  return 0;
}

//--------------------------------------------------------
// Below are function definitions
//--------------------------------------------------------

void integrity(void)
{
  printf("I, have completed this assignment with integrity\n");
}

void printname(char op, char op2)
{
  printf("My name is %c.%c.\n", op, op2);
}

int cube_add(int a, int b)
{
  int result;
  result = pow(a, 3) + pow(b, 3);
  return result;
  // You must have a return statement in a function that has a return type other than void
  // The return statement must match the return type of the function
}

// 1. Function with no parameters and no return value
void func1(void)
{
  printf("This is func1: No parameters, no return value.\n");
}

// 2. Function with two parameters and no return value
void func2(int a, int b)
{
  printf("This is func2: Received parameters a = %d, b = %d, no return value.\n", a, b);
}

// 3. Function with no parameters and a return value
double func3(void)
{
  printf("This is func3: No parameters, returns a value from scanf.\n");
  double a;
  printf("Enter a number: ");
  scanf("%lf", &a); // Example of using scanf
  return a;
}

// 4. Function with three parameters and a return value
double func4(int a, double b, double c)
{
  printf("This is func4: Received parameters a = %d, b = %lf. c=%lf, returns value (a+b-c)*1.5 to main.\n", a, b, c);
  return (a + b - c) * 1.5;
  // interpret the return statement as:
  // first parameter plus second parameter minus third parameter, then result times 1.5
  // name of these three parameters does not matter
}

// C programming with functions workflow
// 1. Function Declaration (Prototype)
// 2. Main (inside main, call the functions)
// 3. Function Definition

// What is a function prototype?
// A function prototype is a declaration of a function that specifies
// 1. the function's name,
// 2. return type,
// 3. parameters (if any) type

// It serves as a forward declaration,
// allowing the compiler to understand how to call the function before its definition appears in the code.
// Function prototypes are typically placed at the beginning of a source file.

// What is function "return"?
// A function "return" is a statement that specifies the value that a function will send back to the caller.
// It is used in functions that have a return type other than "void".
// Remember that our main function has a return type of int, so you saw "return 0;" at the end of main.
// Different than MATLAB, C functions can return only one variable at a time.