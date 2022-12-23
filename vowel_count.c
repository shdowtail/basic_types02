/* program counts the number of vowels in a sentence*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char *str_sentence;
  int len = 0;
  char c;
  printf ("write a sentence: ");

  str_sentence = (char *) malloc (1 * sizeof (char));

  if (str_sentence == NULL)
    {
      printf ("bad input\n");
      free (str_sentence);
      return 1;
    }
  int vowel_count = 0;
  while ((c = getchar ()) != '\n')
    {
      str_sentence = (char *) realloc (str_sentence, (len + 1) * sizeof (char));
      str_sentence[len] = c;
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
          || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
          vowel_count++;
        }
      len++;
    }
  if (str_sentence)
    printf ("vowel count = %d", vowel_count);
  free (str_sentence);

  return 0;
}