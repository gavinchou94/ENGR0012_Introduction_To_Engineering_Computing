#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Include math library for math functions

int main()
{
  char ch;

  FILE *fptr;
  fptr = fopen("triangle.txt", "w");
  do
  {
    int a, b, c;
    printf("Enter three integers, must be in ascending order 0<a<b<c: \n");
    do
    {
      printf("Please enter a positive integer for side a: ");
      scanf("%d", &a);
    } while (a <= 0);

    do
    {
      printf("Please enter an integer b (must >= %d): ", a);
      scanf("%d", &b);
    } while (b < a);

    do
    {
      printf("Please enter an integer c (must >= %d): ", b);
      scanf("%d", &c);
    } while (c < b);
    // you can also use scanf("%d %d %d", &a, &b, &c);

    printf("The three sides you entered are: %d, %d, %d\n", a, b, c);
    fprintf(fptr, "The three sides you entered are: %d, %d, %d\n", a, b, c);
    if (a + b > c && a + c > b && b + c > a)
    {
      printf("The three sides a/b/c are valid for a triangle\n");
      fprintf(fptr, "The three sides a/b/c are valid for a triangle\n");

      // first find cosC
      double cosC;
      cosC = (a * a + b * b - c * c) / (2.0 * a * b);
      // wrong if cosC = (a^2+b^2-c^2)/(2.0 * a * b);
      // wrong if cosC = (a*a+b*b-c*c)/(2 * a * b);
      // correct if cosC = (pow(a,2)+pow(b,2)-pow(c,2))/(2.0 * a * b);

      // now find sinC
      double sinC;
      sinC = sqrt(1 - cosC * cosC);
      // it's okay to merge the above two lines into one line
      // e.g., double sinC = sqrt(1 - pow(cosC, 2));

      // finally find the area
      double area;
      area = 0.5 * a * b * sinC;
      printf("The area of the triangle is %.2f\n", area);
      fprintf(fptr, "The area of the triangle is %.2f\n", area);

      // Then use switch-case to print if angle C is
      // acute/right/obtuse angle
      // Hints: cos(C)=0, C=90 degrees;
      // cos(C)>0, C<90 degrees;
      // cos(C)<0, C>90 degrees

      char angle_type;
      if (cosC == 0)
      {
        angle_type = 2; // right angle
      }
      else if (cosC > 0)
      {
        angle_type = 1; // acute angle
      }
      else
      {
        angle_type = 3; // obtuse angle
      }

      char output;
      switch (angle_type)
      {
      case 1:
        output = 'A';
        break;
      case 2:
        output = 'R';
        break;
      case 3:
        output = 'O';
        break;
      }
      printf("Angle C is %c (A for acute, R for right, O for obtuse)\n\n", output);
      fprintf(fptr, "Angle C is %c (A for acute, R for right, O for obtuse)\n\n", output);
    }
    else
    {
      printf("The three sides a/b/c cannot make a triangle\n\n");
      fprintf(fptr, "The three sides a/b/c cannot make a triangle\n\n");
    }
    printf("Do you want to enter another set of a/b/c? (y/n): ");
    scanf(" %c", &ch);
  } while (ch == 'y' || ch == 'Y');

  char initials[4]; // or char initials[6] for three people or char initials[2]

  printf("Please enter your team's initials letters one by one (e.g. A L for Alice Love):\n");
  for (int i = 0; i < 4; i++)
  {
    scanf(" %c", &initials[i]);
  }
  fprintf(fptr, "--Work done by %c.%c., %c.%c. for Classwork", initials[0], initials[1], initials[2], initials[3]);

  fclose(fptr);
  return 0;
}

// TO DO: Run the code once, and modify the given C program to do the following items:
// 1. Error check until valid values for a/b/c: a must >0, b must >=a, c must >=b
// 2. Use do-while loop to ask user whether to input another set of a/b/c again

// 3. Write the output to a file called "triangle.txt",
// 4. fprintf everything that was printed to the screen (except the prompt messages for inputs part)

// 5. After the repeated run-again loop, fprintf the contributors "--Work by F.L., M.S., for C classwork"
// 6. The initials (F/L/M/S) are scanned via char array using for-loop: initials[4], or initials[6], or initials[2]

/*
Expected output file "triangle.txt":

The three sides you entered are: 3, 4, 5
The three sides a/b/c are valid for a triangle
The area of the triangle is 6.00
Angle C is R (A for acute, R for right, O for obtuse)

The three sides you entered are: 3, 4, 4
The three sides a/b/c are valid for a triangle
The area of the triangle is 5.56
Angle C is A (A for acute, R for right, O for obtuse)

The three sides you entered are: 3, 4, 6
The three sides a/b/c are valid for a triangle
The area of the triangle is 5.33
Angle C is O (A for acute, R for right, O for obtuse)

The three sides you entered are: 3, 4, 7
The three sides a/b/c cannot make a triangle

--Work done by F.L., M.P. for Classwork

*/