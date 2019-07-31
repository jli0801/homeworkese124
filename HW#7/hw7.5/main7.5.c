#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	int[25] lengths; //array
	//when displaying tho make sure the print out the place +1 
	FILE *f;
	char[] term = char[25];	 //string
	char inputOne;
	if(f_open("input.txt", "r") == NULL)
	{
		printf("FILE NOT FOUND");
		return 1;
	}
	fscanf(f, "%s", &inputOne);
	term = fgets(f);
	
	if(inputOne == NULL)
	{
		return 1;
	}
	
	
	while(term != EOF)
	{
		if(term == " " || term == "/n")
		{
			term = fgetc(f);
		}
		if(term != NULL)
		{
			//take the word and find the length and lengths[length_word]++;
			lengths[strlen(term)]++; //should work but double check
			
		}
	}
	
	int i = 0;
	for(i = 0; i < sizeof(lengths); i++)
	{
		printf("Number of Words with length %d: %d", i, lengths[i]);
	}
	
	return 0;
}
