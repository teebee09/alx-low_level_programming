#include "main.h"
#include <stdlib.h>

/**
 * count_word - count the number of words in a string
 * @s: string to count
 * Return: return number of words
 */

int count_word(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - function thatsplits a string into words
 * @str: string of array to check
 * Return: NULL if str == NULL or str == ""
 *         return NULL if function fails
 */

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **word;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count_word(str);
	if (n == 1)
		return (NULL);
	word = (char **)malloc(n * sizeof(char *));
	if (word == NULL)
		return (NULL);
	word[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			word[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (word[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(word[k]);
				free(word[n - 1]);
				free(word);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				word[wc][l] = str[i + l];
			word[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (word);
}







