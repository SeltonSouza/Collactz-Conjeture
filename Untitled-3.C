#include <stdlib.h>
#include <stdio.h>

int main () 
{

    int n;

    printf ("digite um numero inteiro positivo:\n");
    scanf ("%d", &n);

    while (n >1) {
    
	if(n % 2 == 0){
		n = n / 2;
        printf("%d\n", n);
    }		
	
    else{
	 n = (3 * n) + 1;
	 printf("%d\n", n);	
    }
    
    }
 
 return 0; 
}