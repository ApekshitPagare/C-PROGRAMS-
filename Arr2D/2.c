#include<stdio.h>
#define SIZE 50
int main()
{
	int i;
	int A[SIZE];
	int n;

	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	
	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}

	printf("Neg.Array Elements Are:\n");
	for(i=0;i<n;i++)
	{
		if(A[i]<0)
		{
			printf("%d\n",A[i]);
		}
	}

	return 0;
}
