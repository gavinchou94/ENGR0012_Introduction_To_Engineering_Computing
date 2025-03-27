#include <stdio.h>
#include <stdlib.h>
#include <math.h>   // Include math library for math functions, like floor
#include <string.h> // Include string library for string functions, like strcmp

int main()
{
  int a = 17, b = 10;
  int c, d;
  float s = 10.9, t;

  if (floor(s) < b)
  {
    printf("Inside block 1\n");
    t = b * s;
    d = a - b;
  }
  else if (floor(s) == b)
  {
    printf("Inside block 2\n");
    t = b / a;
    d = b - a;
  }
  else
  {
    printf("Inside block 3\n");
    t = b / s;
    d = a / b;
  }

  c = a % b;
  printf("c=%3d$\n", c);      // use $ at the end to measure the width
  printf("d=%-5d$\n", d);     // use $ at the end to measure the width
  printf("t=%-6.2f$\n\n", t); // use $ at the end to measure the width

  int i;
  int arr[5] = {2, 4, 6, 8, 10};
  int new_arr[7] = {5, 5, 5, 5, 5, 5, 5};

  for (i = 2; i <= 5; i = i + 3)
  {
    new_arr[i] = arr[i - 2];
  }

  int j = 0;

  while (j < 6)
  {
    printf("%d\n", new_arr[j]);
    j = j + 1;
  }
  printf("z\nz\nz\nz\n\n");
  // if your output exceeds the given 8 lines
  // just show the first 8 lines

  //--------------------------------------------------------------
  // construct an int array of 8 element = 20, 25, 3, 25, 16, 30, 30, 79
  // how to write a for-loop to find the average of the array?
  // and print the average value!
  int arr2[8] = {20, 25, 3, 25, 16, 30, 30, 79};
  int sum2 = 0;
  for (i = 0; i <= 7; i++) // 0:7 in matlab
  {
    sum2 = sum2 + arr2[i];
  }
  float average2 = sum2 / 8.0;
  printf("The average of the array is %.2f\n", average2);

  // first scanf two strings xxx and yyy
  // (e.g. CProgramming, C++Programming, Python, Java,
  // Matlab, Fortran, RLanguage, Julia)
  // then print: "I prefer to coding in xxx than yyy"

  char str1[20], str2[20]; // declare a long char array to store use inputs
  printf("Please enter a language you like: \n");
  scanf("%s", &str1); // read a string all at once from user
  printf("Please enter a language you don't like: \n");
  scanf("%s", &str2); // read a string all at once from user

  printf("I prefer to coding in %s than %s\n", str1, str2);

  // if you choose xxx=CProgramming, then
  // print: "In my favorite language, M[1]=25"
  // else if you choose xxx=Matlab then
  // print: "In my favorite language, M[1]=20"
  // else print: "In my favorite language, M[1]=IDK"

  // Hints: strcmp("Hello", "Hello") == 0
  // strcmp("Hello", "World") != 0
  // you can think strcmp returns the difference between the two strings

  if (strcmp(str1, "CProgramming") == 0)
  {
    printf("In my favorite language, M[1]=25\n");
  }
  else if (strcmp(str1, "Matlab") == 0)
  {
    printf("In my favorite language, M[1]=20\n");
  }
  else
  {
    printf("In my favorite language, M[1]=IDK\n");
  }
}