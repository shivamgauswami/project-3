#include<stdio.h>

main() 
{
  int n,b; 
  
    printf("Enter an integer: ");
    scanf("%d", &n);

    for ( b = 1; b <= 10; b++)
	{
		
        printf("%d * %d = %d \n", n, b, n * b);
    
    }
}
  

