#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Example of writing a string to txt file:\n");
  // Similarly, declare a pointer to a file
  FILE *filePointer; // Same as int, FILE is a data type
                     // * indicates that this is a pointer to a file
                     // Syntax: FILE *any_name;

  // Open a new file for different task mode
  filePointer = fopen("out.txt", "w"); // Creates file output.txt in write mode
                                       // Syntax: assume "any_name" before
                                       // any_name = fopen("file_name", "mode");

  // Check if the file was opened successfully
  // This is especially important when in read or append mode
  // since the file may not exist
  if (filePointer == NULL)
  // == NULL is to check whether filePointer points to a valid file
  {
    printf("Error: Could not open file.\n");
    return 1; // Exit with an error code
              // remember that main() returns an int
              // return 0 means success, return 1 means error
  }

  // If you are here, it means the file was opened successfully
  double ydouble = 15.0;
  // Print to the screen
  printf("The value printed to console screen is %.2lf\n", ydouble);

  // Print to the file
  fprintf(filePointer, "The value printed to file is %.2lf\n", ydouble);
  // Syntax: supposing you use any_name before
  // fprintf(any_name, CONTENT);
  // CONTENT can be just a string, or a string with variables
  // CONTENT follows the same format as printf
  fprintf(filePointer, "Finished.");

  // Close the file
  fclose(filePointer); // This is a must. Syntax: fclose(any_name);
  return 0;
}