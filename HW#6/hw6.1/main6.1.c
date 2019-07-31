#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 100
#include "stack6.1.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int compareBalance (char closed, char open) //popped one is the opened one and exp is the closed one
{
	if((closed == ')') && (open == '(') )
	{
		return 1;
	}
	else if((closed == ']') && (open == '['))
	{
		return 1;
	}
	else if ((closed == '}') && (open == '{'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int main(int argc, char *argv[]) {
	char exp[LEN]; 
	printf("Please input an expression to see if it's balanced: ");
	scanf("%c", &exp);
	int i;

	// AHHHHHHHHHHH
	// exp : [] has length of 1 
	//so now we have a char array that needs to be scanned indiviually and pushed.
			
	for(i = 0; exp [i] != '\0'; i++)
	{
			
			if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			{
				push(exp[i]); //push all opening brackets
				//the first one is in but the second isn't
			}
			
			if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
			{
				
					if(exp[i]==')')
		            {
		                if(peek() == '(')
		                    {
		                    pop();
		                	}
		                else
		                    {
		                    printf("\nUnbalanced");
		                    break;
		                    }
		           }
		           if(exp[i]==']')
		        	{
				
		                if(peek() =='[')
		                {
		                    pop();
		                }
		                else
		                    {
		                    printf("\nUnbalanced");
		                    break;
		                    }
		           }
		           if(peek() =='}')
		            {
		                if(peek() =='}')
		                    {
		                    pop();
		                	}
		                else
		                    {
		                    printf("\nUnbalanced");
		                    break;
		                    }
		           }
				
			}
		
	}
	
	//if it runs all the way then the stack should be empty
	if(getTop() == -1)
	{
		printf("Balanced");
		clear();
	}
	else 
	{
		printf("Not Balanced.");
		clear();
	}
	
	return 0;
}
