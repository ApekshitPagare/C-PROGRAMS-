#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0;
	int A[SIZE][SIZE];
	int n=0;
	int sum=0;


	printf("Enter the Elements of Matrix:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}



	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			sum=sum+A[i][j];
		}
	printf("Sum of Row %d is %d\n",i+1,sum);
	}

	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			sum=sum+A[j][i];
		}
	printf("Sum of Coloumn %d is %d\n",i+1,sum);
	}


	return 0;
		
}
	
