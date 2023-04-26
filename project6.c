#include<stdio.h>

main()
{
    int n,a,fact=1;
    
    printf("Enter an value: ");
    scanf("%d", &n);

    
    if (n < 0)
    {
    	printf("somthing is wrong");
	}
        
    else 
	{
        for (a = 1; a <= n; a++) 
            fact *= a;
        {
		
        printf("Factorial of %d = %d", n, fact);
        
        }
    }

    
}
