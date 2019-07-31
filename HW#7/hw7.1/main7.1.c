#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#DEFINE tCol 0
#DEFINE eCol 1
#DEFINE other 2

#DEFINE blank 0
#DEFINE tRow 1
#DEFINE teRow 2
#DEFINE tetRow 3
#DEFINE teteRow 4



int transTable[5][3] = {tRow, blank, blank,
						blank, tetRow, blank,
						tetRow, blank, blank,
						blank, teteRow, blank,
						tetRow, blank, blank};

int ouputTable[5][3] = {0,0,0,
						0,0,0,
						0,0,0,
						0,1,0,
						0,0,0};
//tete is the only 1 

int main(int argc, char *argv[]) {
	
	int currentState = blank;
	int haveTete = 0; 
	char value;
	int col;
	
	int counter = 0;
	
	File *f;
	if(f_open("input.txt", "r") == NULL)
	{
		printf("Cannot read input.");
	}
	
	while(value != EOF)
	{
		fscanf(f, "%c", &value);
		value = toLower(value);
		if(value == 'e')
		{
			col = eCol;
		}
		else if(value == 't')
		{
			col = tCol;
		}
		else 
		{
			col = other;	
		}
		haveTete = outputTable[currentState][col];
		currentState = transTable[currentState][col];
		if(haveTete == 1)
		{
			counter++;
		}
	}
	printf("The word has 'tete' this many times: %d", counter);	
	
	return 0;
}
