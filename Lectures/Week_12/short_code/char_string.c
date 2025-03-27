#include <stdio.h>
#include <stdlib.h>

int main()
{
  // All the examples below are for chars and strings read

  // Case 1: You know how many chars you want to receive from the user
  // and want user to enter them one by one
  char initials[4];
  printf("Please enter your initials one by one:\n");
  for (int i = 0; i < 4; i++)
  {
    scanf(" %c", &initials[i]);
    // Note the space before %c to ignore any whitespace
  }
  printf("The work is done by %c.%c., %c.%c. for C classwork\n",
         initials[0],
         initials[1],
         initials[2],
         initials[3]);

  // Case 2: You don't know how many chars there are
  // and want user to enter them all at once

  // Declare a long char array to store the filename
  char filename[100];
  printf("Please enter the name of the file all at once: ");
  scanf("%s", filename); // the flag is %s
  // %s is the flag for printing string
  printf("The filename is: %s\n", filename);

  // Case 3: You don't know how many chars there are
  // but you will ask user to give you that number first
  // then ask user to enter the chars one by one

  // Declare a long char array to store
  int digit;
  printf("Please enter the number of chars you want to enter: ");
  scanf("%d", &digit); // the flag is %d

  char str[digit];
  for (int i = 0; i < digit; i++)
  {
    printf("Please enter char #%d: ", i + 1);
    scanf(" %c", &str[i]);
    // Note the space before %c
  }
  return 0;
}