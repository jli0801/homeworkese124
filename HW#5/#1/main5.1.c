#include <stdio.h>
#include <stdlib.h>
#DEFINE len = 26
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//sprintf int to string 
char[] countOccurance (char[] b*) //check if pointers are correct
{
	//a is the occurances so after one character is counted reset
	//b the whole file parsed by WORD 
	int[] allAlphabet[len] = { 0 };
	
	int i =0;
	
	for(i = 0; i < sizeof(b); i ++)
	{
		//parse through each word use another function~
		/*
		while(fullString)
		{
			allAlphabet[toLower(*fullString++) - 'a']; 
			//evauates from 0 to 25 for 26 total
			//to lower to make it easier 
		} */
		//so each array cell is for a letter for the alphabet and 
		//has an ASCII num so print the ASCII num 
		
		allAlphabet[toLower(*fullString) - 61];
	}
	return allAlphabet;
}

/*
int counts[26];
char *p = string;
while (*p) {
counts[tolower(*p++) - 'a']++;
}
*/
int lengthOfWholeFile(File *f)
{
	char term = "";
	int counter = 0;
	term = fgetc(f);
	
	while(term != EOF)
	{
		while (term == ' ' || term == '\n')
		{ //logic or 
	        term = fgetc (f); //skip over
	    }
	    counter++;
	}
	return counter;
}


int main(int argc, char *argv[]) {
	
	
	File *f;
	if((f = fopen("input.txt", "r")) == NULL)
	{
		printf("File cannot be opened.";
		return 1;
	}
	File *f_w;
	f_w = fopen("result.txt", "w"); //writing in 
	
	char inputOne = "";
	char term = "";
	int lengthFile = lengthOfWholeFile(*f); //check this
	char[] allLetters[lengthFile] = {0};
	char[] numberOccur = { 0 };
	int length = 0;
	fscanf(f, "%f", &inputOne);
	
	if(inputOne == NULL)
	{
		return 1; //end everything
	}
	term = fgetc(f);
	
	while(term != EOF)
	{
		while (term == ' ' || term == '\n')
		{ //logic or 
	        term = fgetc (f); //skip over
	    }
	    //other than that
	    //take characters and add to array
	    allLetters[length] = term;
	    length++; 
	    //iterate through new array 
	    
	}
	numberOccur = countOccurance(allLetters);
	int iterate = 0;
	int alphaAscii = 0;
	for(iterate =0; i < sizeof(numberOccur); i++)
	{
		fprintf("result.txt", alphaAscii, numberOccur[iterate]);
		//check the int print 
		alphaAscii ++; // in the for so won't go out of bounds 
	}
	
	//need to call count occurance + print out a char array. like a: 0 b:10 
	    
	
	
	return 0;
}
