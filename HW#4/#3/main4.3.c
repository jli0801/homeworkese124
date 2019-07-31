#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char lowercaseWord (char[] stringIn)
{
	//make all to lower case
	int j;
	char result;
	for (j = 0; j< sizeof(stringIn); j++)
	{
		if(!(j = 0 && j = sizeof(stringIn) && j = (int) sizeof(stringIn)/2 &&
		'A' <= stringIn[j] <= 'Z'))
		{
			stringIn[j] = stringIn[j] - 0x20; //any uppercase ketter not in the 1st last and middle become lowercase
		}
		
		if (j = 0 && j = sizeof(stringIn) && j = (int) sizeof(stringIn)/2)
		{
			if(!('A' <= stringIn[j] <= 'Z')) //not uppercase
			{
				stringIn[j] = stringIn[j] - 0x20; //if 1st last and middle are upper
			}
		}
		result += stringIn[j];
		//another else b/c what if they insert a symbol
	}
	
	return result;
}

int main(int argc, char *argv[]) {
	char[] wordParse;
	File *f;
	
	
	if((f = fopen("testCaps.txt", "r")) == NULL)
	{
		printf("File cannot be opened.";
		return 1;
	}
	File *f_w;
	f_w = fopen("resultCaps.txt", "w");
	//find the first word
	char letter;
	letter =  fgetc(f);
	int index = 0;
	
	while(letter !=EOP)
	{
		if(letter != " " && letter != '\n')
		{
			wordParse[index] = letter;
			letter =  fgetc (f);
			index++;
		}
		else
		{
			//there is a space or next line which means wrap up the word and clear everything 
			fprintf(f_W, lowercaseWord(wordParse));
			wordParse = { NULL };
			letter = "";
			index = 0;
		}
	}
	
	//Plan:
	//change all to lowercase
	//then three lines to change the beginning, middle, end
	//clear all arrays for next word
	
	return 0;
}
