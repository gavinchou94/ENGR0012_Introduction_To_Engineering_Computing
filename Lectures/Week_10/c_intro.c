#include <stdio.h>	// Standard Input Output library
#include <stdlib.h> // Standard library for general utilities

// Main function: Entry point of the program
// Every C program must have a main function. It is where the program starts execution.
int main()
{
	/* 03/11's Content: C Programming Basics, Arrays
	==============================================================
	*/

	// printf is a function from the stdio.h library that prints formatted output to the console.
	// The "\n" is a newline character that moves the cursor to the next line.
	// The text inside the double quotes is the message to be printed.
	printf("Hello, world!\n");

	// Semicolon (;) is used to terminate a statement in C.
	// It tells the compiler that the statement is complete.
	// Unlike MATLAB where semicolon (;) is optional.
	// In C, every statement must end with a semicolon.

	// Print an additional message
	printf("Welcome to learning C programming!\n");

	// Declare and initialize variables
	int a = 5;
	int b = 10;
	int sum = a + b;

	// int is a data type for integers
	// Variables a, b, and sum are declared as integers and initialized with values.
	// Unlike MATLAB, C requires explicit declaration of variable types.
	// In C, you must declare the type of each variable before using it.

	// int a = 5; // first declaration must include type
	// a = 6; // further assignment does not require type, int a=6 here again would be an error

	// Print the sum of two numbers
	printf("The sum of %d and %d is %d\n", a, b, sum);

	int M[10] = {1, 2, 3, 40, 5, 60, 7, 80, 9, 101}; // Array of integers
	// you need to specify the size of the array when you declare it, using []
	// the initial value of an array is included inside a curly braces {}
	// the elements of the array are separated by commas
	// Note the type of M is int, so the type of each element is also int

	printf("the fourth element of M is %d\n", M[3]); // index of C starts from 0
	// KEY DIFFERENCE FROM MATLAB: In C, the index of an array starts from 0, not 1.

	int N[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // 2D array of integers

	printf("the element at row 1 and column 3 of N is %d\n", N[0][2]);
	printf("\n\n\n");

	// Return 0 to indicate successful execution
	// The main function (declared as int function) must return an integer value to the operating system.
	// Returning 0 typically means that the program executed successfully.

	/* 03/13's Content: Data Types, Printf, Precision
	==============================================================
	*/

	// Data Types
	// C has several data types, including int, float, double, char, etc.

	int x = 10, d = 100;						 // integer
	float y = 3.14, e = 2.72;				 // single-precision floating-point number
	double z = 3.14159, f = 1.23456; // double-precision floating-point number
	char ch = 'A', option = '1';		 // character

	// Printf
	printf("x=%d\n", x);					 // %d is a placeholder for an integer
	printf("y=%f\n", y);					 // %f is a placeholder for a float
	printf("z=%lf\n", z);					 // %lf is a placeholder for a double
	printf("ch=%c\n", ch);				 // %c is a placeholder for a character
	printf("option=%c\n", option); // single quotes of anything is a character

	// Never mess up the placeholders and the variables types
	// Although it may not cause an error, it may lead to undefined results
	printf("z in integer is %d\n", z);	 // %d is a placeholder for a float, but z is an double
	printf("ch in integer is %d\n", ch); // %d is a placeholder for an integer, but ch is a character

	// Scanf
	// scanf is a function from the stdio.h library that reads formatted input from the console

	printf("Enter an integer for x: ");
	scanf("%d", &x); // Read an integer from the user and store it in x (it would directly modify x)
	// scanf("%d", &m); // illegal, m is not declared
	// scanf("%d", x);  // illegal, & is a must when using scanf
	// scanf("%d", &x, &y); // illegal, num of placeholder mismatched
	// scanf("%f", &x); // illegal, type mismatched

	printf("x=%d\n", x); // Print the value of x

	printf("Enter a double for z: ");
	scanf("%lf", &z); // Read a double from the user and store it in z

	printf("Enter a char for ch: ");
	scanf(" %c", &ch); // Read a char from the user and store it in ch
	// Note the space before %c, it is used to consume the newline character left in the buffer

	// Precision
	// The precision of a floating-point number is the number of digits after the decimal point.
	// The default precision is 6 digits.

	printf("y=%.2f\n", y);	// %.2f is a placeholder for a float with 2 decimal places
	printf("z=%.3lf\n", z); // %.3lf is a placeholder for a double with 3 decimal places

	printf("f=%7.3lf\n", f);
	// %7.4lf means the total width of the number is 7, including the decimal point and the digits before it
	// If the number is less than 7 digits, it will be padded with spaces on the left

	// left and right alignment in printf
	printf("f=%-7.3lf\n", f);
	printf("f=%+7.3lf\n", f);
	printf("f=%07.3lf\n", f);

	// More on array and 2d array
	int NEW[3][3] = {{1, 2, 3, 5}, {4, 6, 7, 9}, {-11, 8, -12, 14}};
	double NEWD[2][2] = {1.1, 2.2, 3.3, 4.4}; // you can put them just in one {}

	printf("the element at row 1 and column 3 of NEW is %d\n", NEW[0][2]);

	// FIXME
	// printf("the element at row 3 and column 3 of NEWD is %d\n", NEWD[2][2]);

	// You can also scanf to update a value in the array
	// printf("Enter a new value for NEW[0][2]: ");
	// scanf("%d", &NEW[0][2]);

	return 0;
}

/**
 * Workflow: Compiling and Running the Program
 *
 * 1. Write the Program:
 *    - Open your text editor or IDE (e.g., Geany, VS Code).
 *    - Write the C code as shown below and save it as `c_intro.c`.
 *    - If you are using the cloud IDE (i.e., here), compile and run are just to click the run button
 *
 * 2. Compile the Program:
 * 	  - Option A : if in Geany, click compile and then click build
 * 	  - Option B : if in terminal
 *    - Open the terminal, navigate to the directory.
 *    - Use the `gcc` compiler to compile the program:
 *      gcc -o c_intro c_intro.c
 *    - This command tells `gcc` to compile `c_intro.c` and output an executable named `c_intro`.
 *
 * 3. Run the Compiled Program:
 *    - Option A : if in Geany, simply click execute
 * 	  - Option B : if in terminal
 *    - In the terminal, run the compiled program by typing:
 *      ./c_intro
 *    - This command executes the `c_intro` program, and you should see the output in the terminal.
 *
 */