#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *compareChars - Compares chars
  * @s: input string
  * @len_s:  length of s
  * Return: 1 if first and last characters are equal
  */
int compareChars(char *s, int len_s)
{
	if (strlen(s) == 0)
		return (1);
	else if (*s != *(s + len_s))
		return (0);
	return (compareChars((s + 1), len_s - 1));
}
/**
  * is_palindrome - cheeck if a string is a palindrome or not.
  * @s: input string
  * Return: 1 if palindrome. 0 is not.
  */
int is_palindrome(char *s)
{
	int end_s = strlen(s) - 1;

	return compareChars(s, end_s);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%s: %d\n", "level", r);
    r = is_palindrome("redder");
    printf("%s: %d\n", "redder", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    r = is_palindrome("isaadfl");
    printf("%d\n", r);
    return (0);
}
