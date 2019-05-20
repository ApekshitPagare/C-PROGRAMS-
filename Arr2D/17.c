#include<stdio.h>
int main()
{
	int i;
	int j=0;
	int A[50];
	int R[50];

	int n=0;

	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=n-1;i>=0;i--)
	{
		R[j]=A[i];
		j++;
	}

	printf("Reversed Array:\n");
	for(i=0;i<j;i++)
	{
		printf("%d\n",R[i]);
	}

	return 0;

}
