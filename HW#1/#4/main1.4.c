#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	bool prime;
	int givenNumber;

		printf("Give me an integer and I'll tell you if it's prime or not! ");
		scanf("%d", &givenNumber);
		int i;
		for(i = 2; i <= givenNumber/2; i++)
		{
			if(givenNumber%i == 0)
			{
				prime = false;
				
			}
		}
		
		if(givenNumber == 1 || givenNumber == 0)
		{
			printf("Your number is %d. It is neither prime or a composite number.", givenNumber);
		}
		else if (prime)
		{
			printf("Your number is %d and it is prime.", givenNumber);
		}
		else
		{
			printf("Your number is %d and it is not prime.", givenNumber);
			printf("The factors of your number, %d is: ", givenNumber);
			int j;
			for (j = 2; j <= givenNumber/2; j++)
			{
				if(givenNumber%j == 0)
				{
					printf("%d ", j);
				}
			}
			printf("%d %d", 1, givenNumber);
			printf('/n');
		}
		
	return 0;
}
