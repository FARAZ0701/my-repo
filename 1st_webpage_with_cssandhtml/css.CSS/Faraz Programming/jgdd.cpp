#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
int n,row,col,flag=0;
printf("Enter Number");
scanf("%d",&n);

	for(row=1; row>=1; row++)
	{
		for(col=1; col<n*2; col++)
		{

			if(abs(n-col)+1>=row)
			printf("*");
			else
			printf(" ");

		}
		printf("\n");

		if(row==n)
		flag=1;

		if(flag==1)
		row = row-2;
	}

}
