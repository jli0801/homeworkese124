#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//vowel array
void countVowel(char[] fileVowel*, char[] fileOccur*)
{
	int vowelOccur = 0;
	int i=0;
	for (i =0; i < (int)sizeof(fileVowel); i++)
	{
		int j =0 ;
		for(j =0 ; j < (int)strlen(fileVowel[i]); j++)
		{
			//go through one cell, then parse through each letter in cell
			if(toLower(fileVowel[i]) == "a" || toLower(fileVowel[i]) == "e" ||
			toLower(fileVowel[i]) == "i" || toLower(fileVowel[i]) == "o"||
			toLower(fileVowel[i]) == "u"|| toLower(fileVowel[i]) == "y")
			{
				vowelOccur++;
			}
		}
		//done with one word exits loop:
		fileOccur[i] = vowelOccur;
		vowel = 0; //reset
	}
}

int findLow(char[] resultArr*)
{
	int low = resultArr[0]; //first one has to be lowest but will be replaced later 
	int i = 0;
	for (i = 0; i <sizeof(resultArr); i++)
	{
		if(low > resultArr[i])
		{
			low = resultArr[i];
		}
	}
	return low;
	//7 8 2 1 9 5 3
}

int findHigh(char[] resultArr*)
{
	int high = resultArr[0]; //first one has to be lowest but will be replaced later 
	int i = 0;
	for (i = 0; i <sizeof(resultArr); i++)
	{
		if(high < resultArr[i])
		{
			high = resultArr[i];
		}
	}
	return high;
}

int main(int argc, char *argv[]) {
	
	File f*, f_w*;
	if (f_open("input.txt", "r") == null)
	{
		printf("File not found");
		return 1;
	}
	
	f_w = fopen("result.txt", "w"); //writing in 
	
	char inputOne = "";
	char term = "";

	fscanf(f, "%f", &inputOne);
	
	if(inputOne == NULL)
	{
		return 1; //end everything
	}
	term = fgetc(f);

	char[] everyWord = {0};
	char[] result = {0};
	int countW = 0;
	char[] stringTemp = "";
	
	while(term != EOF)
	{
		while (term == ' ' || term == '\n')
		{ //logic or 
		    term = fgetc (f); //skip over
		    stringTemp += term;
	    }
	    everyWord[countW] = stringTemp;
	    stringTemp = "";
	    countW++;
	    //array had been made with every word parse in their own cell
	    //you should make and array with the same size as the parsed one and count vowels 
	}
	
	countVowel(everyWord, result);
	
	//result has the vowels for each word in the same indexs 
	
	//whatever the last and first number is go through 
	//THEY'RE NOT SORTED AHHHHHHHHHHHH
	//okay: go through sorting algorithm to see whats the highest and lowest 
	//use two methods to find lowest and highest (# of vowels) and print!

	int lowestNum = findLow(result);
	int highestNum = findHigh(result);
	int len = sizeof(result);
	while(len > 0)
	{
		if (result[len] == lowestNum)
		{
			fprintf(f_w, "Lowest: ", everyWord[len], " : ", result[len]);
		}
		if (result[len] == highestNum)
		{
			fprintf(f_w, "Highest: ", everyWord[len], " : ", result[len]);
		}
		len--;
	}
	//first parse everyword in doc
	//
	return 0;
}
