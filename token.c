#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - reading the input from te user and displays it back
 *
 * Return: 0
 */
int main(void)
{
        char *string, *token;
        size_t n = 100;

        string = malloc(sizeof(char) * n);
        printf("$ ");
        while (getline(&string, &n, stdin) != -1)
        {
                printf("%s", string);
		token = strtok(string, " ");
		while (token != NULL)
		{
			printf("%s", token);
			token = strtok(NULL, " ");
			if (token != NULL)
				printf("\n");
		}
                printf("$ ");
        }
	printf("\n");
        free(string);
        return (0);
}
