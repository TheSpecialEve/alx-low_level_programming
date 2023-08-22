#include "main.h"


/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
*/

void rev_string(char *s)
{
	 int count = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;

	for (i = 0 ; i < count / 2 ; i++)
	{
		char j;

		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
