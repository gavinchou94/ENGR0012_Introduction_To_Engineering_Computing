#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *filePointer3;
  char filename[100]; // Declare a long char array to store the filename

  do
  {
    printf("Please enter the name of the file to read first integer from: ");
    scanf("%s", filename);
    filePointer3 = fopen(filename, "r"); // try to open the file in append mode
  } while (filePointer3 == NULL); // Check if the file exists
  // If the file does not exist, the loop will continue to prompt for a new name

  // Read the first integer from the file and store at integer z
  int z;
  fscanf(filePointer3, "%d", &z);
  printf("The first integer in the file is %d\n\n", z);
  fclose(filePointer3); // Close the file
  return 0;
}