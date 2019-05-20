#include<stdio.h>
int main()
{
	int i;
	int A[50];
	int m=0;
	int n1=0;
	int index=0;

	printf("Enter the size of ARRAY1:\n");
	scanf("%d",&n1);

	printf("Enter Elements:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&A[i]);
	}
	
	printf("Enter the Element You Want to search:\n");
	scanf("%d",&m);
	for(i=0;i<n1;i++)
	{		
		if(A[i]==m)
		{
			index=i;
			printf("%d is at %d\n",A[i],index);
			break;
		}
	}
	

	return 0;
}
