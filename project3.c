#include<stdio.h>

main()
{
  long long n;
  
  int count = 0;
  printf("Enter an value: ");
  scanf("%d2", &n);
 
 
    do
    {
        n /= 10;
        ++count;
    }
        while (n != 0);
        {
        printf("Number of digits: %d", count);
        }


}

