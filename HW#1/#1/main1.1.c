#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	

	int number1;
	char stopper = '-';
//	char sumSubChar = '-';
	int evenSum = 0;
	int oddSum = 0;


/*	printf("Would you like an even sum or odd sum? Enter E for Even, and O for Odd. ");
	
		scanf("%s", &sumSubChar);*/
	//	getchar();
		
	while(stopper != '#')
	{
		printf("Enter an integer. To stop, enter #. ");
		scanf("%d", &number1);
		if(number1%2 == 1)
		{
			oddSum = oddSum+number1;
		}
		if(number1%2 == 0)
		{
			evenSum = evenSum+number1;
		}
		scanf("%c", &stopper);
	//	getchar();
	
		
	}
	
	printf("The even sum of all your integers is: %d ", evenSum);
	printf("The odd sum of all your integers is: %d ", oddSum);	
	
/*	if((strcmp(sumSubchar,"e") || strcmp(sumSubChar, "E")) == 0)
		{
			printf("The even sum of all your integers is: %c ", evenSum);	
		}
		else if ((strcmp(sumSubchar,"o") || strcmp(sumSubChar, "O")) == 0)
		{
			printf("The odd sum of all your integers is: %c ", oddSum);	
		}
		else
		{
			printf("Input: %s", sumSubChar);
		}*/
	

/*		switch(sumSubChar)
		{
			case 'E': 
			printf("The even sum of all your integers is: %c ", evenSum);
			break;
			
			case 'e':
			printf("The even sum of all your integers is: %c ", evenSum);
			break;
			
			case 'O':
			printf("The odd sum of all your integers is: %c ", oddSum);
			break;
			
			case 'o':
			printf("The odd sum of all your integers is: %c ", oddSum);
			break;
			
			default: 
						
						printf("Incorrect Operator %c\n", sumSubChar);
						
						break;
		} */
	
	return 0;
}



