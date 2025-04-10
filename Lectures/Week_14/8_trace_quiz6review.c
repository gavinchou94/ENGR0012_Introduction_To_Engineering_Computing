// Problem 1

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int modify(int, int[], double, double);
// void helper(double, int);

// int main()
// {
//   int x = 30, y = 3, z = 2, arr[4] = {2, 4, 6, 8}, index = 0;
//   double p = 3.5, q = 1.2, r = 4.8;

//   printf("Starting the program...\n");

//   for (index = 0; index < 6; index = index + 3)
//   {
//     if (index == 0)
//     {
//       printf("In the first if block!\n");
//       printf("Before: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//       x = modify(x, arr, p, q);
//       printf("After: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//     }
//     else if (index > 2 && index < 5)
//     {
//       printf("In the second if block!\n");
//       printf("Before: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//       y = modify(y, arr, r, q);
//       printf("After: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//     }
//     else
//     {
//       printf("In the else block!\n");
//       printf("Before: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//       z = modify(z, arr, r, p);
//       printf("After: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//     }
//   }

//   printf("x=%d y=%d \n z=%d index=%d\n", x, y, z, index - 1);
//   printf("End of program!\n");

//   return 0;
// }

// int modify(int num, int arr[], double q, double p)
// {
//   int result = num % 2; // Check if num is odd or even
//   double temp;

//   printf("Inside modify function...\n");

//   if (result == 0)
//   {
//     printf("In the function if block!\n");
//     arr[num % 4] = arr[num % 4] + 2;
//     temp = q - p;
//     printf("Result: %.2lf\n", temp);
//   }
//   else
//   {
//     printf("In the function else block!\n");
//     arr[num % 4] = arr[num % 4] - 1;
//     temp = q + p;
//     printf("Result: %.2lf\n", temp);
//     helper(p, num);
//   }
//   num = floor(temp);
//   num = num % 6;

//   return num;
// }

// void helper(double val, int divisor)
// {
//   double result = val / divisor;
//   printf("Inside helper: %.3lf\n", result);
// }

// Problem 2

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   printf("hah, \\n, starting the program with a trick\n");

//   char msg1[50] = "LEARNING C is so fun!";
//   char msg2[50] = "PITTEngineering IS GREAT!";
//   char msg3[50] = "Practice Makes Perfect.";
//   char result1[50], result2[50], result3[50];
//   int x = 5, y, z = 10, counter = 0;

//   printf("Tracing through the program\n");

//   for (y = 0; y < 8; y += 3)
//   {
//     if (y == 0)
//     {
//       printf("In the first if block!\n");
//       result1[y] = msg1[x - 3];
//       result2[y] = msg2[y + 1];
//       printf("I shouldn't use %c.%c.\n", result1[y], result2[y]);
//       x = x + 2023;
//     }
//     else if (y == 3)
//     {
//       printf("In the second if block!\n");
//       for (z = 2; z < 5; z++)
//       {
//         result1[z] = msg3[z + 1];
//         result3[z - 2] = msg1[z];
//         printf("%c, %c\n", result1[z], result3[z - 2]);
//       }
//     }
//     else if (y == 6)
//     {
//       printf("In the third if block!\n");
//       if (x > 2025)
//       {
//         for (z = 1; z <= 3; z++)
//         {
//           result2[z] = msg2[z + 2];
//           counter = counter + z;
//         }
//         printf("Counter: %d\n", counter);
//       }
//       result3[y - 4] = msg3[z - 1];
//     }
//   }

//   y = 1;
//   while (y <= 5)
//   {
//     result3[y] = msg1[y];
//     if (y == 3)
//     {
//       y = y + 2;
//       result1[y - 1] = msg2[y];
//       result2[y - 2] = msg3[y];
//     }
//     printf("Loop %d\n", y);
//     y++;
//   }
//   result1[1] = 'b';

//   printf("Final y is %d\n", y);
//   printf("Final Results: %s %s %s\n", result1, result2, result3);
//   printf("100%% sure that the sentence makes no sense!\n");

//   return 0;
// }