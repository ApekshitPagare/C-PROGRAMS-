#include<stdio.h>
#define SIZE 50
int main()
{
	int i;
	int A[SIZE];
	int n;
	int sum=0;

	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	
	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=0;i<n;i++)
	{
		sum=sum+A[i];
	}

	printf("Sum is %d\n",sum);

	return 0;
}
