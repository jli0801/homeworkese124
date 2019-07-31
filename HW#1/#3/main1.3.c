#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inputN, i, j, k, l;
	int totalZero;
	int binaryNum[32];
 
  printf("Enter an integer: ");
  scanf("%d", &inputN);
 
  printf("%d in binary number system is:\n", inputN);
 
  for (i = 31; i >= 0; i--)
  {
    j = inputN >> i;
	    if (j & 1) //And operator
	    {
	    
	      printf("1");
	      binaryNum[i] = 1;
		}
	    else
	    {
	    
	      printf("0");
	    	binaryNum[i] = 0;
		}
	}
	printf("\n");     
  
  
  
  for(k = 31; k >= 0; k--)
  {
  	if(binaryNum[k] == 0)
  	{
	  	totalZero++;
	}
	else
	{
		printf("Number of Leading Bits 0 : %d ", totalZero);
		break;
	}
  }
 
  
	return 0;
}
