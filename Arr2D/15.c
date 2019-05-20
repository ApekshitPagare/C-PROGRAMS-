#include<stdio.h>
int main()
{
	int i;
	int A[50];
	int n;
	int count=0;
	int j=0;
	int freq[50];
	int k=0;


	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		freq[i]=-1;
	}


	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(A[i]==A[j])
			{
				for(k=j;k<n;k++)
				{
					A[k]=A[k+1];
				}
				
			n--;
			j--;
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
