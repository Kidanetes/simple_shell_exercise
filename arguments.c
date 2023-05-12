#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: number of arguments
 * @agrv:  arguments
 * Return: 0
 */
int main(int ac __attribute__((unused)), char *argv[])
{
	int i  = 0;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
