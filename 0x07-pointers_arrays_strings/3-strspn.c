#include <main.h>

/**
*_strspn - the length of a prefix substring
*@s: String
*@accept: char
*Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (c = 0; accept[c] != s[i]; c++)
	{
		if (accept[c] == '\0'
			return (i);
	}
	}
	return (i);
}
