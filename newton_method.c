/* Program calculates square the square root of a number using the Newton's method.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (void)
{
  char *str_number;
  double x;
  double y = 1.0f;
  double y_old;
  double xy_div;
  double y_xy_div_avg;
  char *end_pointer;

  /* Allocating memory for a character array for reading input*/
  str_number = malloc (100);
  if (str_number == NULL)
	{
	  printf ("Error: unable to allocate memory.\n");
	  return 1;
	}
  printf ("Enter a positive number: ");
  scanf ("%s", str_number);

  /*Converting input-string to a double value*/
  x = strtod (str_number, &end_pointer);
  free (str_number);

  /*First calculation happens outside a loop in order to assign right values for y_old and y*/
  y_old = y;
  xy_div = x / y;
  y_xy_div_avg = (y + xy_div) / 2;
  y = y_xy_div_avg;
  /*Loop repeats until absolute difference between y_old and y is less than 0.00001*/
  while (fabs (y_old - y) > 0.00001)
	{
	  y_old = y;
	  xy_div = x / y;
	  y_xy_div_avg = (y + xy_div) / 2;
	  y = y_xy_div_avg;

	}
  printf ("Square root = %g\n", y_xy_div_avg);

  return 0;
}
