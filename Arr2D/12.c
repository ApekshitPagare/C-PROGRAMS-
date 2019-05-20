#include<stdio.h>
int main()
{
	int i;
	int A[50];
	int n;
	int count=0;
	int m=0;
	int j=0;
	int c=0;


	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}


	for(i=0;i<n;i++)
	{
		
		printf("Enter the elements you want Count of:\n");
		scanf("%d",&m);
		count=0;
		j=0;
		while(j<n)
		{
			if(A[j]==m)
			{
				count++;
				c=count;
			}
		j++;
		}
		printf("Count is %d\n",c);
		break;

	}

	
	return 0;
}
	
