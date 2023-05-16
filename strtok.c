#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _strlen(char *s);
char **_strtok(char *str);
/**
 * _strlen - returns the length of a string
 * @s: input parameter
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}

	return (i);
}
char **_strtok(char *str)
{
	int j = 0, i , len = 0;
	char **array, char *token;

	if (str == NULL)
		return (NULL);
	i = number_of_words(str);
	if (i == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (i + 1));
	if (array == NULL)
		return (NULL);
	token = strtok(str, " ");
	while (token != NULL)
	{
		
		len = _strlen(token);
		array[j] = malloc(sizeof(char) * (len + 1));
		if (array[j] == NULL)
		{
			while (--j)
				free(array[j]);
			free(array);
			return (NULL);
		}
		i = 0;
		while (token[i] != '\0')
		{
			array[j][i] = token[i];
			i++;
		}
		array[j][i] = '\0';
		j++;
		token = strtok(NULL, " ");
	}
	array[j] = NULL;
	return (array);
}
int Number_of_words(char *s)
{
	int i, j = 0;

	if (str[0] == ' ')
		i = 0;
	if (str[0] != ' ' && str[0] != '\0')
		i = 1;
	while (str[j] != '\0')
	{
		if (str[j] == ' ' && str[j + 1] != ' ' && str[j + 1] != '\0')
			i++;
		j++;
	}
	return (i);
}
