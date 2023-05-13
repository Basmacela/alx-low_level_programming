#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: arguments count
 * @argv; arguments value
 * Return: 0
*/
int main(int char argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
