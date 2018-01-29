#include <stdio.h>
#include "map.h"

void clearMap(char map[ROWS][COLS])
{
	int i,j;

	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			map[i][j] = '@';
}

void printMap(char map[ROWS][COLS]){
	int i,j;
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
}

void enterRoad(char map[ROWS][COLS],int startX,int startY,int endX,int endY){
	if(startX == endX){
		int i = 0;
		for(i = startY; i <= endY; i++){
			if(map[i][startX] == '@'){
				map[i][startX] = '|';
			}else{
				map[i][startX] = ' ';
			}
		}
	}else{
		int i = 0;
		for(i = startX; i <= endX; i++){
			if(map[startY][i] == '@' || map[startY][i] == '-'){
				map[startY][i] = '-';
			}else{
				map[startY][i] = ' ';
			}
		}
	}
}