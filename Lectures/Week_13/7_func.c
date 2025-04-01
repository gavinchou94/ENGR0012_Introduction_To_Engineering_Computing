#include <stdio.h>

// Function prototypes
void func1(void);           // Function with no parameters and no return value
void func2(int a, int b);   // Function with two parameters and no return value
double func3(void);         // Function with no parameters and a return value
double func4(int a, int b); // Function with two parameters and a return value

int main()
{
  // Call func1
  func1();

  // Call func2 with two arguments
  func2(5, 10);
  // int x=5, y=10;
  // func2(x, y);

  // Call func3 and store its return value
  double result1 = func3();
  printf("Result from func3: %.2f\n", result1);

  // Call func4 with two arguments and store its return value
  double result2 = func4(10, 20);
  printf("Result from func4: %.2f\n", result2);

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
  printf("This is func3: No parameters, returns a value.\n");
  return 3.14; // Example return value
}

// 4. Function with two parameters and a return value
double func4(int a, int b)
{
  printf("This is func4: Received parameters a = %d, b = %d, returns a value.\n", a, b);
  return (a + b) * 1.5; // Example calculation and return value
}