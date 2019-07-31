#include <stdio.h>
#include <stdlib.h>

#define SMALL_VALUE -1e10
#define SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float largestARR(float input[], int sizeOfArray)
{
	float largest = SMALL_VALUE;
	int i;
	 for( i =0; i< sizeOfArray; i++)
	 {
	 	largest = (a[i] > largest)? a[i]: largest;
	 }
	 return largest;
	 
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
	
	float values [SIZE];
	int index = 0;
	float largest;
	
	fscanf("%f", &values[index]);
	index++;
	
	c = fgetc(f);
	while (c != EOF)
	{
		fscanf("%f", &values[index]);
		index++;
	
		c = fgetc(f);
	}
	
	largest = largestARR(values, index);
	
	return 0;
}
