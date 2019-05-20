#include<stdio.h>
int main()
{
	int i;
	int j=0;
	int n;
	int A[50];
	int B[50];

	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=0;i<n;i++)
	{
		while(j<n)
		{	
			B[j]=A[i];
			i++;
			j++;
		}
	}


	printf("Array Elements Are:\n");
	for(i=0;i<j;i++)
	{
		printf("%d\n",B[i]);
	}

	return 0;
}
	 
