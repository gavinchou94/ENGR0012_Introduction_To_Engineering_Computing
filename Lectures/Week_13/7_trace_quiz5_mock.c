#include <stdio.h>
#include <math.h>

int main()
{
  char phrase[50] = "boldly, I bound beyond blue bridges";
  char proceed = 'y', retryFlag = 'n';

  printf("Starting the sequence...\n");

  int p = 72, q = 9, r = 121, s = 0, t;
  int arr[6] = {15, 27, 39, 51, 63, 75};

  do
  {
    t = p / 3;

    switch (s)
    {
    case 3:
      printf("In case 3 now\n");
      t = pow(t - 14, 2);
      printf("t is now %d\n", t);
      proceed = 'y';
      break;

    case 0:
      printf("Handling base case\n");
      t = 0;
      printf("t is %d\n", t);
      proceed = 'y';
      break;

    case 4:
      printf("Executing case 4\n");
      t = p % q;
      arr[s] = sqrt(r);
      printf("t is %d\n", t);
      printf("Array snapshot: ");
      for (int i = 4; i >= 0; i = i - 2)
      {
        printf("%d ", arr[i]);
      }
      printf("\n");
      proceed = 'z';
      break;

    case 2:
      printf("Inside case 2\n");
      t = t + r;
      printf("t is now %d\n", t);
      proceed = phrase[5];
      break;

    default:
      printf("Default case active\n");
      t = r / q;
      proceed = phrase[18];
      printf("t is %d\n", t);
    }

    s = s + 1;
    retryFlag = proceed;

  } while (retryFlag == 'y');

  printf("Final value of s: %d\n\n", s);

  return 0;
}