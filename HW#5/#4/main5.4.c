#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	//removing vowels 
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


	
	while(term != EOF)
	{
		while (term == 'a' || term == 'e'
		|| term == 'i' || term = 'o' || 
		term == 'u' || term = 'y')
		{ //logic or 
	        fprintf(f_w, term); //skip over the vowels and print everythign else how it normally was 
	       	
	    }
	
	//recongize vowels, maybe skip the vowels 

	return 0;
}
