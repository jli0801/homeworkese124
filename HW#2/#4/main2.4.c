#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *vowels[6];
	vowels[0] = 'a';
	vowels[1] = 'e';
	vowels[2] = 'i';
	vowels[3] = 'o';
	vowels[4] = 'u';
	vowels[5] = 'y';
	char stopper = '-';
	char userInput;
	bool vowel;

	while(stopper != '#')
	{
		vowel = false;
		
		printf("Enter a letter. To stop, enter #. ");
		scanf("%c", &userInput);
		
		int i;
		for(i = 0; i < sizeof(vowels); i++)
		{
			if(userInput == vowels[i])
			{
				vowel = true;
			}
		}
		
		
		if(!vowel)
		{
				printf("%c is a consonant. \n", userInput);
		}
		else
		{
			printf("%c is a vowel. \n", userInput);
		}
		
		
		
		scanf("%c", &stopper);
	}
	return 0;
}
