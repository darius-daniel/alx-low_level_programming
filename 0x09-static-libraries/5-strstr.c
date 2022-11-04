#include "main.h"
#include <string.h>

/**
  * _strstr - finds the first occurence of the substring needle in the string
  * haystack
  * @haystack: string to be searched
  * @needle: substring
  * Return: a pointer to the beginning of the located substring, or NULL if
  * substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
