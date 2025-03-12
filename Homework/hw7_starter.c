#include <stdio.h>
#include <stdlib.h>

int main()
{
	char pt;
	printf("Which part of HW7 do you want to test?\n"); // For grading purposes to allow partial credit
	scanf(" %c", &pt);																	// just put your code of each part inside each case

	switch (pt)
	{
	case '1':
	{
		// Part 1 code here
		// 1. Displays integrity statement
		// 2. Add your name using comment

		break;
	}
	case '3':
	{
		// Part 3 code here
		// 3. Displays the given paragraphs

		break;
	}
	case '4':
	{
		// Part 4 code here
		// 4. Declare A, B, C. Use scanf to get user input, display accordingly
		// (for double, use %lf) Display format without space: "<RequiredText><newline>A=?<newline>B=?<newline>C=?<newline>"

		break;
	}
	case '5':
	{
		// Part 5 code here
		// 5. Declare the G array, and print it out one element at a time. (no need to use a loop)
		// Display format without space: "G=<newline>value1<newline>value2<newline>value3<newline>value4<newline>"

		break;
	}
	case '6':
	{
		// Part 6 code here
		// 6. Declare the H array, and print it out one element at a time. (no need to use a loop)
		// (for double, use %lf) Format: "H=<newline>value1<newline>value2<newline>value3<newline>value4<newline>"

		break;
	}
	default:
		printf("Invalid part selected.\n");
		return 1; // Exit with error
	}
	return 0;
}

/**
 * Your code will be also maunally graded for the following:
 *
 * A. Include a comment with your name at the top.
 *
 * B. Include comments, indentation, and whitespace so that your program is neat and understandable to anyone who reads it.
 *
 * C. This is an individual submission. Please just name your file as hw7.c (other names would run into error) and submit through the link.
 *
 * D. If you use AI tools, please submit a copy of your prompt(s) and the AI response(s).
 *
 * E. If you did not use AI tools, please include a statement/comment at the top of your file indicating that you did not use AI when completing your assignment.
 *
 * F. Upon finishing all, it's suggested to remove all the given comments and only keep your own comments.
 */