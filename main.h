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
typedef struct mine {
	int status;
	int distance;
} mine, *pmine;

typedef mine** minefield;