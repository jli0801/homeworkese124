#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define len 30
int main(int argc, char *argv[]) {
	
	FILE *f; 
	if(f_open("input.txt","r") == NULL) //there is an error i can't fix here 
	{
		return 1; 
	}
	int xInt; 
	int kInt;
	printf("How many inputs would you like? ");
	scanf("%d", &xInt);
	printf("What largest place would you like?");
	scanf("%d", &kInt);
	

	int inputArray[len];
	int input;
 
	fscanf(f, "%d", &input);

	while(input != EOF)
	{
	
		if(input == ' '|| input == '\n')
		{
			input = fgetd(input);
		}
		
		int i = 0; 
		for(i = 0; i < len; i++)
		{
			input = fgetd(input);
			inputArray[i] = input;
		}
		
	}
	
	int highestNum = inputArray[0]; 
	int j = 0; 
	int k = 0;
	int l = 0;
	while(k < kInt) //0, 1, 2 if k is 3
	{
		for (j = 0; j < sizeof(inputArray); j++)
		{
			if(inputArray[j] > highestNum)
			{
				highestNum = inputArray[j];
			}
		}
		//after finding the largest one 
		printf("The largest number is %d", highestNum);
		for (l = 0; l< sizeof(inputArray); l++)
		{
			if(inputArray[l] == highestNum)
			{
				inputArray[l] = -1; //make it ireelevant aka to -1
			}
		}
	}
	
	//code below didn't work and counted highest multiple times 
	/*
	int k = 0;
	int j = 0;
	for(k = 0; k < intK; k++)
	{
		for(j = 0; j < sizeof(inputArray); j++)
		{
			if(inputArray[j] > highestNum[k])
			{
				highestNum[k] = inputArray[j];
			}
			//if its less 
		}
	} 
	*/
	return 0;
}
