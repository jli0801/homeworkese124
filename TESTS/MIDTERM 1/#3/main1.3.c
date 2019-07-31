#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int powerTen(int n)
{
	int j;
	int total = 1;
	for(j=1; j < n; j++)
	{
		total *= 10;
	
	}
	if (n== 0)
	{
		return 1;
	}
	return total;
}

int main(int argc, char *argv[]) {
	
	//9+99+999 
	//10^0*9+ 90+9 + 900+90+9
	int *terms;
	int sum =0 ;
	printf("Number of terms: ");
	printf("\n");
	
	scanf("%d", &terms);
	
	int i;
	for( i=0; i < terms; i++)
	{
		sum = sum + powerTen(i)*9;
	}
	
	//WONT COMPILE THE WAY I WANT
	//IM SURE THE CODE ITSELF WORKS
	//I DOUBLE CHECKED :(
	printf("Sum: '%d'" + sum );
	return 0;
}
