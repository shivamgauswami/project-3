#include<stdio.h>

main()
{

  int a,n,b1=0,b2=1,fact;



  printf("Enter the number of terms: ");
  scanf("%d", &n);


  printf("Fibonacci Series: %d, %d, ", b1, b2);

 
    for (a=3; a<=n; a++)
    {
        printf("%d ", fact,b2);
        b1=b2;
        b2=fact;
        fact=b1 + b2;
    }
    
}



