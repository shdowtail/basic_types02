#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main (void)
{
  char *str_number;
  double x;

  double xy_div;
  double x_xy_div_avg;

  char *end_pointer;

  str_number = malloc (100);
  if (str_number == NULL)
    {
      printf ("Error: unable to allocate memory.\n");
      return 1;
    }
  printf ("Enter a positive number: ");
  scanf ("%s", str_number);
  x = strtod (str_number, &end_pointer);
  free (str_number);

  double y = 1.0f;
  double y_before = y;
  xy_div = x / y;
  x_xy_div_avg = (x + xy_div) / 2.0f;
  y = x_xy_div_avg;
  printf ("   x       y       x/y   avg of y and x/y" );
  printf ("%g %g %g %g\n", x, y, xy_div, x_xy_div_avg);

  double y_after = y;
  while (fabs(y_before - y_after))
  {
      y_before = y;
      xy_div = x / y;
      x_xy_div_avg = (x + xy_div) / 2.0f;
      y = x_xy_div_avg;
      y_after = y;

      printf ("%g %g %g %g\n", x, y, xy_div, x_xy_div_avg);
  }
}
