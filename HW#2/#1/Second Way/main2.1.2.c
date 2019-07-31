#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float userX;
	float epX = 0.0001; 
    int k;
	int i;
    float sign = 1;
	float ln_userX; 
	
    printf("Enter a number for ln(x): ");
    scanf("%f", &userX);
    
    k = 1;
    i = 1;
    while(sign > epX || (sign*-1) > epX)
	{ 
		k++;
    	sign = 1;
		while(i < k)
		{ 
            sign *= (userX-1);
            i++;
        }
        
        if(k%2 == 0)
		sign *= -1;
        sign /= k;
        ln_userX += sign;
        
    }
    printf("ln(%f)= %f", userX , ln_userX);
    return 0;
}
