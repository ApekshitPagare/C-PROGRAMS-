#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0;
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int C[SIZE][SIZE];
	
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
			C[i][j]=A[i][j]+B[i][j];
		}
	}


	printf("Final MATRIX:\n");
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
	

	
	
