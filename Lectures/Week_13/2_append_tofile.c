#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *filePointer2;
  filePointer2 = fopen("output.txt", "a"); // "a" is for appending

  if (filePointer2 == NULL)
  {
    printf("Error: Could not open file.\n");
    return 1;
  }

  fprintf(filePointer2, "This is an appended line. So cool\n");
  printf("Text Added: This is an appended line. Isn't it cool\n\n");
  fclose(filePointer2);
  return 0;
}