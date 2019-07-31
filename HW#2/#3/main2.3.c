#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int binary;
	int exp =0;
	int result=0;
    int i, k;
    
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    for(i = 0; i < 31 ; i++)
	{
        if(i == 0)
        {
			d+=1;
		}
        for(k = 1;k <= i; k++)
		{
            n*=(2*(b%2));
        }
        d += n;
        n = 1;
     b /= 10;
    }
    printf("Your binary number : %d is equal to  %d", binary, d);
    
    return 0;
}
