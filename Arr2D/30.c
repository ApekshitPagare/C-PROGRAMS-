#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0;
	int A[SIZE][SIZE];
	int found=1;
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
			if(j>i && A[i][j]!=0)
			{
				found=0;
			}
		}
	}

	if(found==1)
	{
		printf("Lower Traingular Matrix\n");
		for(i=0;i<SIZE;i++)
		{
			for(j=0;j<SIZE;j++)
			{
				printf("%d\t",A[i][j]);
			}
		printf("\n");
		}
	}
	else
	{
		printf("Normal Matrix\n");
		for(i=0;i<SIZE;i++)
		{
			for(j=0;j<SIZE;j++)
			{
				printf("%d\t",A[i][j]);
			}
		printf("\n");
		}
	}

	return 0;

}
