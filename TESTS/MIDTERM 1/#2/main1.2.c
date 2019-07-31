#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//mississippi
//misisipi
//consectuive so if the next char is that then ignore 
int main(int argc, char *argv[]) {
	FILE *f, *f_w;
	char term;	
	char inputOne;
	if(f_open("input.txt", "r") == NULL)
	{
		printf("FILE NOT FOUND");
		return 1;
	}
	fscanf(f, "%f", &inputOne);
	term = fgetc(f);
	
	if(inputOne == NULL)
	{
		return 1;
	}
	
	f_w = fopen("results.txt", "w");
	char first, next;
	int firstWord; //HOW DO YOU PUT A BOOLEAN IN 
	while(term != EOF)
	{
		firstWord = 0;
		//IT WILL IGNORE THE NEXT ONE IF THE SAME 
		if(term == " " || term == "/n")
		{
			term = fgetc(f);
			firstWord = 1;
		}
		else
		{
			if(firstWord)
			{
				term = fgetc(f);
				first = term;
			}
			else
			{
				term = fgetc(f);
				next = term;
				if(first == next || next == EOF)
				{
					fscanf(f_w, first);
					term = fgetc(f);
					next = term;
				}
				else
				{
					fscanf(f_w, first);
				}
				first = next;
				firstWord = 0;
			}
			
		}
	}
	
	
	return 0;
}
