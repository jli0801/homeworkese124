#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int firstInt;
	int secondInt;
	while(1)
	{
		printf("Enter one number: ");
		scanf("%d", &firstInt);
		
		printf("Enter second number: ");
		scanf("%d", &secondInt);
		
		printf("GCD of %d and %d is %d ", firstInt, secondInt, gcd(firstInt, secondInt)); 
	}

	firstInt = 0;
	secondInt = 0;
	return 0;
}

int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
