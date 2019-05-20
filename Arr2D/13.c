#include<stdio.h>
int main()
{
	int i;
	int A[50];
	int n;
	int count=0;
	int j=0;
	int freq[50];


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
				count++;
				freq[j]=0;
			}
		}

		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}

	printf("Unique elements in the array are:\n");
	for(i=0;i<n;i++)
    	{
        	if(freq[i]==1)
        	{
        	    printf("%d ",A[i]);
        	}
    	}

	return 0;
}
