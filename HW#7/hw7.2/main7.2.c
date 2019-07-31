#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#DEFINE zeroCol 0
#DEFINE oneCol 1

#DEFINE blank 0 
#DEFINE zeroRow 1
#DEFINE zeroOneRow 2
#DEFINE zeroOneZeroRow 3
#DEFINE zeroOnezeroOneRow 4
#DEFINE password 5

int transTable [5][2] = {zeroRow, blank,
						blank, zeroOneRow,
						zeroOneZeroRow, blank,
						blank, zeroOnezeroOneRow,
						blank, password};
int outcomeTable[5][2] ={0,0,
						0,0,
						0,0,
						0,0,	
						0,1};
int main(int argc, char *argv[]) {
	
	int currentState = blank;
	int correctPass = 0;
	int value;
	int col; 
	int userIn;
	printf("Enter the passcode (with no spaces in between): ");
	
	scanf("%d", &userIn); //01011
	while (userIn != 0) {
       if(userIn == 0)
       {
       		col = zeroCol;
	   }
	   else 
	   {
	   		col = oneCol;
	   }
	   correctPass = outputTable[currentState][col];
	   currentState =  transTable[currentState][col];
	   if(correctPass == 1)
	   {
	   	printf("Correct Password. Opening...");
	   }
       userIn /= 10;
  }
	
	
	return 0;
}
