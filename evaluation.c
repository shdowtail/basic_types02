#include <stdio.h>
//program evaluates expression 1+2.5*3 left to right
int main (void)
{
  float expression = (1.0f + 2.5f) * 3.0f;
  printf ("%.1f", expression);
  return 0;
}