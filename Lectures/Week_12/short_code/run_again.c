#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Include math library for math functions

int main()
{
  char runagain = 'Y';
  do
  {
    printf("Hello, world!\n");
    int a = 45;        // a and b can be defined inside the loop
    int b = pow(a, 2); // a's square
    printf("The square of %d is %d\n", a, b);

    printf("Do you want to run the program again? (Y/N): ");
    scanf(" %c", &runagain);
  } while (runagain == 'Y');
  return 0;
}

// Structure of do-while loop for a program to be run again

// declare char of runagain before do-while
// do
// {
//   printf and scanf to assign value to runagain;
// }
// while (runagain = 'Y');