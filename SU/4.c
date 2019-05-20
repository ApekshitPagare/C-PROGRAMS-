#include<stdio.h>

struct Distance
{
	int dist;
};

int main()
{
	int i;
	int SUM=0;
	struct Distance D[2];
	for(i=0;i<2;i++)
	{
		printf("Enter Distance:\n");
		scanf("%d",&D[i].dist);
	}
	
	SUM=display(D);
	printf("Sum of distances is %d\n",SUM);

	return 0;
}

int display(struct Distance d[])
{
	int i;
	int sum=0;
	for(i=0;i<2;i++)
	{
		sum=sum+d[i].dist;
	}

	return sum;
}
	

