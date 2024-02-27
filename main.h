// MAIN.H
// By Brady McDermott
// 2-26-2024

// Pragmas
#pragma once

// Defines
#define STATUS_SHOWN 0x0
#define STATUS_MINE 0x1
#define STATUS_HIDDEN 0x2
#define STATUS_FLAGGED 0x4

// Structures
typedef struct game
{
	unsigned int width;
	unsigned int height;
	unsigned int mines;
} game, *pgame;

typedef struct mine
{
	unsigned short int status; // uses STATUS_ definitions
	unsigned short int distance; // 0-9 value
} mine, *pmine;

typedef mine** minefield;