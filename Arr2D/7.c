#include<stdio.h>
int main()
{
	int count=0;
	int Count=0;
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
		if(A[i]%2==0)
		{
			count++;
		}
		else
		{
			Count++;
		}
	}


	printf("Number of Even numbers:%d\n",count);
	printf("Number of Odd numbers:%d\n",Count);

	return 0;
}

