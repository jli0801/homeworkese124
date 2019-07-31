#include <stdio.h>
#include <stdlib.h>
#include "stack6.2.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int intUser;
	int remainder; 
	//so how we usually do this by hand is:
	//you divide the number by 2 
	//and push the answer 
	//do this until remainder is 0 
	//at the end just pop out (becomes backwards)
	
	printf("Enter a positive integer to get the binary equivalent: ");
	scanf("%d", &intUser);
	
	while(intUser != 0)
	{
		remainder = intUser%2; //get remainder, 
		push(remainder);
		intUser = (int)intUser/2;
	}
	while(!(isempty()))
	{
		printf("%d", pop());
	}
	return 0;
}
