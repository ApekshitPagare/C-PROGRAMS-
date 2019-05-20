#include<stdio.h>
int main()
{
	int A[50];
	int i;
	int n;
	int pos;


	printf("Enter the Size of Array:\n");
	scanf("%d",&n);

	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}


	printf("Enter the Element position to be deleted in Array:\n");
	scanf("%d",&pos);

	/*printf("Enter the Position:\n");
	scanf("%d",&pos);*/
     
	for(i=pos-1; i<n-1; i++)
        {
        	A[i]=A[i+1];	
        }
       	n--; 

       
        printf("Array elements after DELETION :\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n", A[i]);
        }


	return 0;
}
