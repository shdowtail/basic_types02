/* User enters a first and last name then program displays last name and an initial,
 * white-spaces can be present in user input*/
#include <stdio.h>

int main (void)
{
  char *first_name;
  char *last_name;
  char *combined;
  char initial;

  printf ("Enter first and last name: ");
  scanf ("%s %s", first_name, last_name);
  initial = first_name[0];
  printf ("%s, %c ", last_name, initial);
}