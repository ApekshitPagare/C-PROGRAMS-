#include<stdio.h>

struct Date
{
	int dates;
};

int main()
{
	int i;
	int SUM=0;
	struct Date D[2];
	for(i=0;i<2;i++)
	{
		printf("Enter Date %d:\n",i+1);
		scanf("%d",&D[i].dates);
	}
	
	display(D);

	return 0;
}

void display(struct Date d[])
{
	int i;
	
	for(i=0;i<2;i++)
	{
		if(d[i].dates==d[i+1].dates)
		{
			printf("Equal\n");
			break;
		}
		else
		{
			printf("Not Equal\n");
			break;
		}
	}

}
	

