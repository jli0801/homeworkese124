#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numRow = 0;
	int numCol = 0;

	FILE *f;
	char term;	
	char inputOne;
	if((f = fopen ("input.txt", "r")) == NULL)
	{
		printf("FILE NOT FOUND");
		return 1;
	}
	fscanf(f, "%f", &inputOne);
	term = fgetc(f);

	fscanf(f, "%d", &numRow);
		
	fscanf(f, "%d", &numCol);
	int intArray[numRow][numCol];
	int i = 0;
	int j = 0;
	
	for (i = 0; i < numRow; i++)
	{
		 for (j = 0; j <numCol ; j++)
		 {
	    fscanf (f, "%f", &intArray[i][j]);
		}
	}
	
	//double for loop to go through a 2d array
	int col = 0;
	int row = 0;
	
	int sum = 0;
	int totalNum = 0;
	for (row = 0 ; row < numRow ; row++)
	{
		for(col = 0; col < numCol; col++)
		{
			sum += intArray[row][col];
			totalNum++;
		}
	}
	int average = (int)(sum/totalNum);
	printf("Average of matrix is: %d", average);
	return 0;
}
