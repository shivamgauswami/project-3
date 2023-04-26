#include<stdio.h>

main()
{
	int n,fd=0,sd=1,sum;

	printf("Enter your number =");
	scanf("%d",&n);

	while (n>fd)
	{

	printf("%d ",fd);
	sum=fd+sd;
	fd=sd;
	sd=sum;

    }
}
