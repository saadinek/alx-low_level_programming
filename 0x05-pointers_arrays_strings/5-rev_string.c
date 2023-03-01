#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int i, j;
char tmp;

for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}
}
