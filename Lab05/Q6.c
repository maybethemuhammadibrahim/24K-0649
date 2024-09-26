#include <stdio.h>
int main()
{
  int x;
  x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
  /*In the ternary operator the first condition fails and the compiler jumps to the expression after the colon. The statement in the false 
  expression of the first ternary operator also fails as (2<5) returns 1 and 1 == 1, which leads to to 30 being assigned to x*/

  printf("%d", x);
  return 0;

}
