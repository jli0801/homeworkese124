#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void readMatrix (int[] row, int[] col)
{
	int i, j;
	int zeros = 0;
	int real = 0;
	for( i = 0; i < sizeof(row); i++)
	{
		for(j = 0; j < sizeof(col); j++)
		{
			if(row[i] == 0 && col[i] == 0)
			{
				zeros++;
			}
			else
			{
				real++;
			}
		}
	}
	
	if(zeros == 2*real)
	{
		printf("Input is a sparse matrix.");
	}
	else
	{
		printf("Input is not a sparse matrix.");
	}
	
}*/


int main(int argc, char *argv[]) {
	FILE *f;
	char term;	
	char inputOne;
	if(f_open("input.txt", "r") == NULL)
	{
		printf("FILE NOT FOUND");
		return 1;
	}
	fscanf(f, "%f", &inputOne);
	if(inputOne == NULL)
	{
		return 1;
	}
	term = fgetc(f);
	int zeros = 0;
	int realNum = 0;
	
	while(term != EOF)
	{
		int numCol = term;
		term = fgetc(f);
		int numRow = term;
		term = fgetc(f);
		
		if(term == "\n" || term == " ")
		{
			term = fget(f);
		}
		else
		{
			if(term == 0)
			{
				zeros++;
			}
			else 
			{
				realNum++;
			}
		}
		
	}
	if(zeros == (2*realNum) || zeros > (2*realNum))
	{
		printf("Input is a sparse matrix.");
	}
	else
	{
		printf("Input is not a sparse matrix.");
	}
	
	
	return 0;
}
