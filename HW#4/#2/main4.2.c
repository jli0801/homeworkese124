#include <stdio.h>
#include <stdlib.h>

#define SMALL_VALUE -1e10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float largestOfThree(float x1, float x2, float x3)
{
	return (x1 > x2)? ((x1 > x3)? x1: x3): ((x2 >x3)? x2: x3); //returns largest of the three values 
}

int main(int argc, char *argv[]) {
	
	File *f;
	if((f = fopen("input.txt", "r")) == NULL)
	{
		printf("File cannot be opened.";
		return 1;
	}
	File *f_w;
	f_w = fopen("result.txt", "w");
	
	
	float in1;
	float in2 = SMALL_VALUE;
	float in3 = SMALL_VALUE;
	float term;
	float largest;
	
	fscanf(f, "%f", &in1);
	
	if(in1 == NULL)
	{
		return 1; //end everything
	}
	term = fgetc(f);
		
	while(term != EOF)
	{
		 while (term == ' ' || term == '\n')
		{ //logic or 
	        term = fgetc (f);
	    }
	    
		largest = largest OfThree(int1, in2, in3); //get the largest from group
		in3 = in2; //set the last one to blank
		in2 = largest; // make it the largest so you can scan more 
		
		fscanf(f, "%f", &in1);
		term = fgetc(f);
	}
	fprintf(f_w, "Largest Value is: %f ", largest);
	
	fclose(f);
	fclose(f_w);
	return 0;
}
