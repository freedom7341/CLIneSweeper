// MAIN.H
// By Brady McDermott
// 2-26-2024

// Pragmas
#pragma once

// Defines
#define STATUS_SHOWN 0x0
#define STATUS_HIDDEN 0x1
#define STATUS_MINE 0x2

// Structures
typedef struct mine {
	int status;
	int distance;
} mine, *pmine;

typedef struct minefield {
	mine **mines;
} minefield, *pminefield;