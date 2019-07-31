#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int inputN, i, j;
	int totalOne, totalZero;
 
  printf("Enter an integer: ");
  scanf("%d", &inputN);
 
  printf("%d in binary number system is:\n", inputN);
 
  for (i = 31; i >= 0; i--)
  {
    j = inputN >> i;
 
    if (j & 1) //And operator
    {
    totalOne++;
      printf("1");
	}
    else
    {
     totalZero++;
      printf("0");
	}
     
  }
 	printf("\nTotal number of Zeros: %d \nTotal Number of Ones: %d", totalZero, totalOne);
 
  
	return 0;
}
