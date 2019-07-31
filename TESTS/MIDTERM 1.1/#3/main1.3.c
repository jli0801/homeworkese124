#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#DEFINE alphabet 26
int main(int argc, char *argv[]) {
	
	//read it as a string
	//and use the char[] to parse trhough and make it lower 
	
	FILE *f; 
	if(f_open("input.txt" ,"r") == NULL)
	{
		return 1; 
	}
	char stringInput[100];
	int alphabetCounter[alphabet]; //the occurances go 
	
	char input[];
	fscanf(f, "%s", input);

	while(input != EOF)
	{
		if(input == ' ' || input == '/n')
		{
			input = fgets(input); 
		}
		stringInput = toLower(input); //make the whole string lower
		//analyze string here 
		int j =0;
		for(j = 0; j < sizeof(stringInput); j++) //either strlen or sizeof
		{
			//a = 64
			//changed into all lower
			alphabetCounter[stringInput[i] - 64]++; //change the ascii a = 64 and it becomes 0
			
		}
			input = fgets(input); 
		i++; //just get all of the strings out of the file and inot an array
	}
	
	//printing the occurrances 
	int a = 0 ;
	for(a = 0; a <alphabet; a++)
	{
		printf("Letter %c has this many occurances: %d", a+64, alphabetCounter[a]);
	}

	return 0;
}
