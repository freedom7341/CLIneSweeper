// MAIN.C
// By Brady McDermott
// 2-26-2024

#define _CRT_SECURE_NO_WARNINGS

// Includes
#include "main.h"
#include <stdio.h>

// Function Prototypes
int generate_minefield(minefield mf, unsigned int row, unsigned int col, unsigned int mines);
int main(void);


// Functions
int generate_minefield(minefield mf, unsigned int rows, unsigned int cols, unsigned int mines)
{
	int i;

	// If rows or columns are greater than 80 or 20 (board size)
	// then return with an error. Also if they're 0.
	if ((rows == 0) || (cols == 0) || (rows > 20) || (cols > 80))
		return 1;

	// We can't have more mines than spaces, or 0 mines
	mines = (mines > rows * cols) ? (rows * cols) : ((mines == 0) ? 1 : mines);

	// Allocate pointers to the rows
	mf = malloc((rows * sizeof(pmine)) + ((unsigned long long)cols * rows * sizeof(mine)));

	// Allocate the columns and mines
	for (i = 0; i < rows; i++)
	{
		//mf[i] = malloc(cols * sizeof(mine));
	}

	// Return :D
	return 0;
}

int main(void)
{
	minefield mf = NULL;
	unsigned int input[3] = { 0, 0, 0 };

	// Query for board size
	printf("Enter board width (max. 80):\n");
	if (scanf("%u", &input[1]) == 0)
	{
		printf("Input error, halting...");
		return 1;
	}

	printf("Enter board height (max. 20):\n");
	if (scanf("%u", &input[0]) == 0)
	{
		printf("Input error, halting...");
		return 1;
	}

	// Query for amount of mines
	printf("Enter number of mines (max. %u):\n", input[0] * input[1]);
	if (scanf("%u", &input[2]) == 0)
	{
		printf("Input error, halting...");
		return 1;
	}

	// Generate the board
	if (generate_minefield(mf, input[0], input[1], input[2]) != 0)
	{
		printf("Board generation error, halting...");
		return 1;
	}

	// Begin the game!

	return 0;
}
