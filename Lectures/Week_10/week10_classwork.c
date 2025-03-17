#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tipPercent;
  scanf("%d", &tipPercent);
  double tipAmount = (tipPercent / 100.0) * 18.00;
  double total = 18.00 + 1.26 + tipAmount;
  printf("\n\n");

  printf("\"Gavin's Grill & Dine\"\n");
  printf("=====================================\n");
  printf("Item\t\t\tPrice\n");
  printf("-------------------------------------\n");
  printf("Steak\t\t\t$12.00\n");
  printf("Drink\t\t\t$6.00\n");
  printf("-------------------------------------\n");
  printf("Subtotal:\t\t$18.00\n");
  printf("Tax (7%%):\t\t$1.26\n");
  printf("Tip (%d%%):\t\t$%.2f\n", tipPercent, tipAmount);
  printf("Total:\t\t\t$%.2f\n\n", total);
  printf("-------------------------------------\n");
  printf("Quote of the Day: \"Good food = Good mood.\"\n");
  printf("Note: Visit us at C:\\GavinsGrill\\Menu\n");
  printf("Thank you for dining with us!\n");
  return 0;
}

// TO DO: Write a C program that prints the following message to the console:
// (1) practice using C escape sequences, such as \n, \t, \\, \', \", and %%
// (2) practice using scanf to read input from the user: tip percent as a int
// (3) practice displaying with precision and alignment

// Your code should start:  int tipPercent; scanf("%d", &tipPercent);
// Then fill in the question marks with the appropriate values. e.g., 18*20% = 3.6

/*

"Gavin's Grill & Dine"
====================================
Item                Price
------------------------------------
Steak               $12.00
Drink               $6.00
------------------------------------
Subtotal:           $18.00
Tax (7%):           $1.26
Tip (??%):          $?.??
Total:              $?.??

------------------------------------
Quote of the Day: "Good food = Good mood."
Note: Visit us at C:\GavinsGrill\Menu
Thank you for dining with us!

*/