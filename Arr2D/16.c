#include<stdio.h>
int main()
{
	int i;
	int j=0;
	int k=0;
	int A[50];
	int B[50];
	int C[50];
	int n1=0;
	int n2=0;
	int n3=0;

	printf("Enter the size of ARRAY1:\n");
	scanf("%d",&n1);

	printf("Enter Elements:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&A[i]);
	}

	printf("Enter the size of ARRAY2:\n");
	scanf("%d",&n2);

	printf("Enter Elements:\n");
	for(j=0;j<n2;j++)
	{
		scanf("%d",&B[j]);
	}

	n3=n1+n2;	
	for(i=0;i<n1;i++)
	{		
		for(k=0;k<n3;k++)
		{
			C[k]=A[i];
			i++;
		}
	}


	for(j=0;j<n2;j++)
	{
		for(k=n1;k<n3;k++)
		{
			C[k]=B[j];
			j++;
		}
	}

	printf("Third Array:\n");
	for(k=0;k<n3;k++)
	{
		printf("%d\n",C[k]);
	}


	return 0;
}
