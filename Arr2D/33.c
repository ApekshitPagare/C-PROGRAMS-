#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0;
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int sum=0;


	printf("Enter the Elements:\n");
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
			B[j][i]=A[i][j];
		}
	}

	printf("Transposed Array:\n");
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
	
