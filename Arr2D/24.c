#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0;
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int C[SIZE][SIZE];
	int sum=0;
	int k=0;
	
	printf("Enter the Matrix1 Elements:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	printf("Enter the Matrix2 Elements:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}


	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			for(k=0;k<SIZE;k++)
			{
				sum=sum+A[i][k]*B[k][j];
			}
		C[i][j]=sum;
		}
	}
	
	

	
	printf("Array after multiplication:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
