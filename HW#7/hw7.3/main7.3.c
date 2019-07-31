#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printArray(int number[])
{
	int i =0; 
	for(i = 0; i < szieof(number) ; i++)
	{
		printf("Fib [%d]:  %d", i, number[i]);
	}
}

int fib (int userInt)
{
	if(userInt == 0)
	{
		return userInt;
	}
	else
	{
		return fib(userInt -1) + fib(userInt-2);
	}

}
int main(int argc, char *argv[]) {
	
	int fibNumbers[30]; 
	
	int j = 0;
	for(j = 0; j < sizeof(fibNumbers); j++)
	{
		fibNumbers[j] = fib(j);
	}
	
	return 0;
}
