/*
Make a program is which user enters a time using the 12-hour clock,
the input will have the form of "hours:minutes" followed by either A, P, AM or PM(
either lower-case or upper case).
*/
#include <stdio.h>

int main (void)
{
  int hours, minutes;
  char am_pm;
  printf ("enter time: ");
  scanf (" %d:%d%c", &hours, &minutes, &am_pm);

  if (am_pm == 'P' || am_pm == 'p')
    {
      hours += 12;
    }
  printf ("%d:%d", hours, minutes);

  return 0;

}
