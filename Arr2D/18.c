#include<stdio.h>
int main()
{
	int i;
	int j=0;
	int k=0;
	int A[50];
	int E[50];
	int O[50];

	int n=0;

	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=0;i<n;i++)
	{
		if(A[i]%2==0)
		{
			E[j]=A[i];
			j++;
		}
		else
		{
			O[k]=A[i];
			k++;
		}
	}
	
	printf("Even Array:\n");
	for(i=0;i<j;i++)
	{
		printf("%d\n",E[i]);
	}

	printf("Odd Array:\n");
	for(i=0;i<k;i++)
	{
		printf("%d\n",O[i]);
	}

	return 0;

}
