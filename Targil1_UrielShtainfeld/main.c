#include <stdio.h>
#include "map.h"

void main()
{
	char map[ROWS][COLS] ;
	int roads[MAX_ROADS][4];
	int roadCounter = 0,i,j,k,o,l,s;
	char next;

	clearMap(map);
	do{
		
		printf("Enter indices <i,j> of road start:");
		scanf("%d %d",&i,&j);
		printf("Enter indices <k,o> of road end:");
		scanf("%d %d",&k,&o);
		enterRoad(map,i,j,k,o);
		roadCounter++;
	}while(roadCounter < MAX_ROADS );
	printMap(map);

	scanf("%d",&s);
}