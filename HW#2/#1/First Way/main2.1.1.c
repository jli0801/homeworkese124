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
    
    for(k = 1; sign > epX || (sign*-1) > epX; k++)
	{ 
    	sign = 1;
    	
        for(i = 0; i < k ; i++)
		{ 
            sign *= (userX-1);
        }
        
        if(k%2 == 0)
		sign *= -1;
        sign /= k;
        ln_userX += sign;
        
    }
    printf("ln(%f)= %f", userX , ln_userX);
    return 0;
}
