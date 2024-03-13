#include<stdio.h>

main()
{
	int i,j,k=11;
	
	for(i=11;i<=15;i++)
	{
		for(j=i;j>=11;j--)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}