#include<stdio.h>
int main()
{
	int count=0;
	int i;
	int A[50];
	int n;

	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=0;i<n;i++)
	{
		if(A[i]<0)
		{
			count++;
		}
	}


	printf("Number of Negative numbers:%d\n",count);
	return 0;
}

