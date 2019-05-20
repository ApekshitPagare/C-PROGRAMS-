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
			if(i==j)
			{
				sum=sum+A[i][j];
			}
		}
	}

	printf("Sum of diagonals is %d\n",sum);

	return 0;
		
}
	
