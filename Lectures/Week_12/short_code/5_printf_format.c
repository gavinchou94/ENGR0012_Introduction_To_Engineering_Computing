#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m = 40, n = 25;
  printf("The value of m is %d\n", m);
  printf("The value of n is %d\n", n);

  // Swap the values of i and j
  int temp = m;
  m = n;
  n = temp;

  printf("After swapping, the value of n is %d\n", n);
  printf("m=%6d(R-A w=6)\n", m);  // 6 width, right aligned
  printf("m=%5d(R-A w=5)\n", m);  // 5 width, right aligned
  printf("m=%4d(R-A w=4)\n", m);  // 4 width, right aligned
  printf("m=%-4d(L-A w=4)\n", m); // 4 width, left aligned
  printf("m=%3d(R-A w=3)\n", m);  // 3 width, right aligned

  float p = m / 4.0;
  printf("p=%f(DEF-A dp=6)\n", p);             // default 6 decimal places, default aligned
  printf("p=%10f(R-A dp=6 w=10)\n", p);        // 10 width, default 6 decimal places, right aligned
  printf("p=%5.2f(R-A dp=2 w=5)\n", p);        // 5 width, 2 decimal places, right aligned
  printf("p=%7.4f(R-A dp=4 w=7)\n", p);        // 7 width, 4 decimal places, right aligned
  printf("p=%-8.3f(L-A dp=3 w=8)\n", p);       // 8 width, 3 decimal places, left aligned
  printf("p=%+8.2f(RSigned-A dp=2 w=8)\n", p); // 8 width, 2 decimal places, right aligned
  printf("p=%-10.1f(L-A dp=1 w=10)\n", p);     // 10 width, 1 decimal places, left aligned
  printf("p=%09.3f(Zero-A dp=3 w=9)\n\n", p);  // 9 width, 3 decimal places, default aligned with leading zeros
}

/**





Summary of format specifiers with width and alignment

%x.yf : x width and y decimal places, right aligned
reserve x spaces and write from right,
last decimal positions go to the right
finish y decimal places, then numbers, then spaces to make it x-width

%+x.yf : show sign, right aligned, same as above
everything is the same as above, but show sign
if negative, show - sign, if positive, show + sign

%0x.yf : leading zeros, right aligned, same as above
everything is the same as above, but leading zeros
not using spaces to make it x-width, but using 0s
if negative, show - sign, if positive, does not show

%-x.yf : left aligned,
write from left, start from numbers, then y decimal places
last with spaces to make it x-width

*/