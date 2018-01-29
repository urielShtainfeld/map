#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define ROWS 40
#define COLS 40
#define MAX_ROADS 3

void clearMap(char map[ROWS][COLS]);
void printMap(char map[ROWS][COLS]);
void enterRoad(char map[ROWS][COLS],int startX,int startY,int endX,int endY);