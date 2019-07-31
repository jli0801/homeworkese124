#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#DEFINE length = INT_MAX
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//& and * are both pointers and references to the object 

//reverse the characters of the word
void switchChar (char[] stringA*, char[] holder*, int place)
{
	//holder should be initialized and given a length
	//use the back to put in the front of holder
	//use front to put in the back of holder
	
	int i =0;
	
	//we need to reverse it in a simpler manner 
	
	//int length = strlen(holder); 
	for (i =(int) strlen(stringA); i <= 0; i--)
	{
		
		*holder[length] += *string[i]; //you want to concat onto the existing string 
		
	}
	length++;
	//don't return it; you'll need to store it 
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
	char[] reversedChar[length] = {0};
	char[] stringOne = ""; //one word at a time
	int inputP =0;
	while(term != EOF)
	{
		while (term == ' ' || term == '\n')
		{ //logic or 
	        term = fgetc (f); //skip over
	        stringOne[0] += term;
	    }
	    
	    	switchChar(*stringOne, *reversedChar, inputP);
	    	inputP++;
	    	stringOne = "";
	    
	}
	int r =0;
	for (r =0; r < (int)sizeof(reversedChar); r++)
	{
		fprintf(f_w, reversedChar[r]);
	}
	
	//get one word. parse here and put into switchChar
	return 0;
}
