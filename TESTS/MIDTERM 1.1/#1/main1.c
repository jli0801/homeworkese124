#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *f; 
	if(f_open("input.txt" ,"r") == NULL) // there is an error i cant fix here 
	{
		return 1; 
	}
	int numRow = 6;
	int numCol = 6;
	
	float inputArray[numRow][numCol];
	
	float input;

	fscanf(f, "%f", &input);

	int numPos = 0;
	int numNeg = 0 ;
	int numZero = 0;
	
	int i = 0;
	int j = 0;
	
	
	while (input != EOF)
	{
		input = fgetf(input);
		
		if(input == ' ' || input == '\n')
		{
			input = fgetf(input);
		}
		
		for (i = 0; i < numRow; i++)
		{
			for(j = 0; j < numCol; j++)
			{
				input = fgetf(input);
				inputArray[numRow][numCol] = input; //idk if this loops through 
			}
		}
		
	}
	
	//go through entire array to see what numbers we have 
	for (i = 0; i < numRow; i++)
	{
			for(j = 0; j < numCol; j++)
			{
				
				if(inputArray[numRow][numCol] == 0)
				{
					numZero++;				
				}
				else if (inputArray[numRow][numCol] > 0)
				{
					numPos++;
				}
				else
				{
					numNeg++;
				}
			}
	}
	
	printf("There are %f zero(s), %f positive numbers and %f negative numbers.", numZero, numPos, numNeg);
	
	
	return 0;
}

