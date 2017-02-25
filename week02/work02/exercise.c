/*
 * Name: Hafizha Zuharah Az Zahra
 * NPM: 1506689673
 * Class: B
 * Comment: Exercise for implementing C
 */

#define LOOP 4

#include <stdio.h>

void main() {
	int input = 5;
	int result  = 0;
	int ii;

	for (ii=0; ii<LOOP; ii++) {
		result = result+input;
	}

	printf("%d times %d equals %d\n", input,LOOP,result);
}
