#include<stdio.h>
int main()
{
	int A[50];
	int i;
	int n;
	int m;
	int pos;


	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}


	printf("Enter the Element to be inserted in Array:\n");
	scanf("%d",&m);

	printf("Enter the Position:\n");
	scanf("%d",&pos);


	if(pos > n+1 || pos <= 0)
    	{
        	printf("Invalid position! Please enter position between 1 to %d", n);
    	}
   	else
    	{
        
		for(i=n; i>=pos; i--)
        	{
         	   A[i]=A[i-1];
        	}
        A[pos-1] = m;
       	n++; 

       
        printf("Array elements after insertion :\n ");
        for(i=0; i<n; i++)
        {
            printf("%d\n", A[i]);
        }
    }


	return 0;
}
