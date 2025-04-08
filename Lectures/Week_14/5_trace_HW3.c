#include <stdio.h>
#include <stdlib.h>
int main()
{ // begin main
  int k, new_ans, i = 0;
  int v[] = {2, 3, 4, 5, -1, 0, 1};
  for (k = 0; k < 5; k = k + 1)
  {
    switch (i)
    {
    case 0:
    case 2:
      new_ans = v[k] + v[k + 1];
      printf("k = %d\n", k);
      break;
    case 1:
      new_ans = k - 1;
      printf("i = %d\n", k);
      printf("k = %d\n", k);
    case 3:
      new_ans = v[k] - v[k + 1];
      printf("i = %d\n", i);
      break;
    default:
      new_ans = i;
    }
    printf("new ans = %d\n", new_ans);
    i = i + 1;
  }
} // end main