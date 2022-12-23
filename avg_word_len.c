/* Program calculates the average length of a word*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char *sentence;
  int len = 0;
  char c;
  printf ("Enter a sentence: ");

  sentence = (char *) malloc (1 * sizeof (char));
  int word_count = 1;
  int letter_count = 0;
  float avg_len;
  /*Get the amount of words*/
  while ((c = getchar ()) != '\n')
    {
      sentence = (char *) realloc (sentence, (len + 1) * sizeof (char));
      sentence[len] = c;
      if (sentence[len] != ' ')
        {
          letter_count++;
        }
      if (sentence[len] == ' ')
        {
          word_count += 1;
          printf ("word#: %d\n", word_count);
        }
      len++;
    }
  avg_len = (float) letter_count / (float) word_count;
  printf ("Average length of a word is: %g", avg_len);

  return 0;

}