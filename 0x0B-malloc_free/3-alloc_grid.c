#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-D array
 * @width: width of the 2-D array
 * @height: height of the 2-D array
 * Return: if width <= 0,height <= 0 or function fails give NULL
 *         otherwise, return a pointer to the 2-D array of integer
 */

int **alloc_grid(int width, int height)
{
	int **twoDim;
	int hgt_i, widt_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int *) * height);

	if (twoDim == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		twoDim = malloc(sizeof(int *) * width);

		if (twoDim[i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(twoDim[hgt_i]);

			free(twoDim);
			return (NULL);
		}

	}
	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (widt_i = 0; widt_i < width; widt_i++)
			twoDim[hgt_i][widt_i] = 0;
	}

	return (twoDim);
}
