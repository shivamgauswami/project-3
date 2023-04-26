#include<stdio.h> 

main()    
{    
    int n,r,sum=0,reverse=0;    
      printf("enter the number=");    
      scanf("%d",&n);    
    int temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;  
        reverse = reverse * 10 + r;  
        n /=10;  

    }  
	printf("reverse number is %d \n",reverse);   
    if(temp == sum)   
	{

        printf("palindrome number ");    
    }
    else
    {

        printf("not palindrome");   
    }
}2
