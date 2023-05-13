#include <stdio.h>
/**
 * main - adds positive numbers, followed by a new line
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
*/
int main(int argc, char *argv[])
{
        int i, x, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
