#include<stdio.h>
int main()
{
	int n;
	int A[50];
	int i;

	printf("Enter the Size of Array:\n");
	scanf("%d",&n);


	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}


	int max=A[0];
	int min=A[0];

	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
		
		if(A[i]<min)
		{
			min=A[i];
		}
	}


	printf("MAX=%d\n",max);
	printf("MIN=%d\n",min);

	return 0;
}
