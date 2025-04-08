#include <stdio.h>

int main()
{
  int a = 412; // Declare an integer variable

  int *ptr_a; // Declare a pointer to an integer
  ptr_a = &a; // Assign the address of a to pointer ptr_a
  // this two lines can be combined as: int *ptr_a = &a;

  // Print the address of y using two methods
  // Note the placeholder %p
  printf("Address of a (using &a): %p\n", &a);
  printf("Address of a (using ptr_a): %p\n", ptr_a);

  // Print the address of the pointer itself
  // Skip if you don't understand
  printf("Address of ptr_a: %p\n", &ptr_a); // we don't want to confuse you

  // Print the value of a using two methods
  printf("Value of a (direct access): %d\n", a);
  printf("Value of a (using pointer): %d\n", *ptr_a); // note the %d here

  double b = 1.414;
  double *ptr_b = &b; // Declare a pointer to a double and assign the address of b
  printf("Address of b (using &b): %p\n", &b);
  printf("Value of b (using pointer): %lf\n", *ptr_b); // note the %f here

  // Just one more fancy thing about pointers
  // Skip if you don't understand
  *ptr_a = 100; // Change the value of a using the pointer
  printf("Value of a (after changing using pointer): %d\n", a);

  return 0;
}

/*
Key Notes:
(1) Pointer Declaration: Use * to declare a pointer (e.g., int *pointer;).

(2) Assigning an Address: Use & to get the address of a variable (e.g., pointer = &variable;).

(3) Dereferencing a Pointer: Use * to access the value stored at the address held by the pointer (e.g., *pointer).

(4) Printing Pointers: Use %p to print pointer addresses.

(5) Pointer Types: The type of the pointer must match the type of the variable it points to.
*/