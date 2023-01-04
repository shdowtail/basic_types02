/*This program calculates the factorial of a given number.
 * It does this by creating an array of the numbers from 1 to the given number
 * , then iterating through the array and multiplying each element by the factorial up to that point.
 * The final result is returned as the factorial of the given number.*/

#include <stdlib.h>
#include <stdio.h>

int find_factorial (int);

int main (void)
{
  int num = 6;
  int factorial = find_factorial (num);
  printf ("factorial = %d ", factorial);

}
int find_factorial (int index)
{
  int initial_num = index;
  int factorial;
  int *arr_factorial_numbers = malloc (index * sizeof (int));
  while (index > 0)
    {
      arr_factorial_numbers[index - 1] = index;
      index--;

    }
  int i = 0;
  while (i < initial_num)
    {
      if (i == 0)
        {
          factorial = 1;
        }
      if (i > 0)
        {
          factorial *= arr_factorial_numbers[i];
        }
      i++;
    }
  free (arr_factorial_numbers);

  return factorial;
}