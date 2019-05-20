#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0;
	int m=0;
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];

	
	printf("Enter the Matrix1 Elements:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}


	printf("Enter the Number:\n");
	scanf("%d",&m);

	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			B[i][j]=A[i][j]*m;
		}
	}


	printf("Final MATRIX After Scalar Multiplication:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("%d\t",B[i][j]);

		}
	printf("\n");
	}

	return 0;

}
	

	
	
