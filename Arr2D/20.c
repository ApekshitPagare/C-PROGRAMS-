#include<stdio.h>
int main()
{
	int i;
	int A[50];
	int j=0;
	int n=0;

	printf("Enter the size of ARRAY1:\n");
	scanf("%d",&n);

	printf("Enter Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}

	int temp=0;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}


	printf("Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}


	return 0;
}
				
