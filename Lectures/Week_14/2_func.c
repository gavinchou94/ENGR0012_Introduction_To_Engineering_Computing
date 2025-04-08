#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void func1(void);                  // Function with no parameters and no return value
void func2(int, int);              // Function with two parameters and no return value
double func3(void);                // Function with no parameters and a return value
double func4(int, double, double); // Function with three parameters and a return value

int main()
{
  // Call func1
  func1();

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
  double x = 5.5, y = 10.5;
  double result2 = func4(10, x, y);
  printf("Result from func4: %.2f\n", result2);

  // Variables passed to/from the function and main do not need to have the same variable names
  // the program will look at the order of the variables, not the names

  return 0;
}

// Function definitions

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
  return (a + b - c) * 1.5; // Example calculation and return value
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