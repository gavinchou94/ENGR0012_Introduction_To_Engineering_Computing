#include <stdio.h>	// Standard Input Output library
#include <stdlib.h> // Standard library for general utilities

// Main function: Entry point of the program
// Every C program must have a main function. It is where the program starts execution.
int main()
{
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

	// Return 0 to indicate successful execution
	// The main function (declared as int function) must return an integer value to the operating system.
	// Returning 0 typically means that the program executed successfully.
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
 * Example Output:
 * Hello, world!
 * Welcome to learning C programming!
 * The sum of 5 and 10 is 15
 */