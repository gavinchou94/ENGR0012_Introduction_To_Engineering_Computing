#include <stdio.h>
#include <stdlib.h>

int main()
{
	char pt;
	printf("Which part of HW7 do you want to test?\n");
	scanf(" %c", &pt);

	switch (pt)
	{
	case '1':
	{
		// Part 1
		printf("I, (Your Name), certify that I have completed this assignment in an honest manner.");
		// Your name
		break;
	}
	case '3':
	{
		// Part 3
		printf("The first \\n puts the text on a new line, the double slash by the n is needed to allow the printing of the \\n in this printout.\n");
		printf("If you want to add a tab in the printout you insert \\t\tit will tab the text as shown here.\n\n");
		printf("Sometimes it is nice to print out text in \"double quotes\", this requires the double quote escape sequence \\\". Sometimes it is nice to print out text in \'single quotes\', this requires the single quote escape sequence \\\'.\n\n");
		printf("Want to print out a %%? You need to use the escape sequence \"%%%%\", do you\nunderstand\nthe code required to print this sequence out?");
		break;
	}
	case '4':
	{
		// Part 4
		int A;
		double B;
		char C;

		scanf("%d", &A);
		scanf("%lf", &B);
		scanf(" %c", &C);

		printf("Proper Printing\n");
		printf("All integers\n");
		printf("A=%d\n", A);
		printf("B=%d\n", B);
		printf("C=%d\n", C);
		printf("All doubles\n");
		printf("A=%lf\n", A);
		printf("B=%lf\n", B);
		printf("C=%lf\n", C);
		printf("All characters\n");
		printf("A=%c\n", A);
		printf("B=%c\n", B);
		printf("C=%c\n", C);
		break;
	}
	case '5':
	{
		// Part 5
		int G[4] = {3, 5, 8, 9};
		printf("G=\n");
		printf("%d\n", G[0]);
		printf("%d\n", G[1]);
		printf("%d\n", G[2]);
		printf("%d\n", G[3]);
		break;
	}
	case '6':
	{
		// Part 6
		double H[2][2] = {4.4, 5.5, 6.6, 7.7};
		printf("H=\n");
		printf("%lf\n", H[0][0]);
		printf("%lf\n", H[0][1]);
		printf("%lf\n", H[1][0]);
		printf("%lf\n", H[1][1]);
		break;
	}
	default:
		printf("Invalid part selected.\n");
		return 1; // Exit with error
	}
	return 0;
}