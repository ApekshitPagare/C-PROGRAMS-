#include<stdio.h>
struct Employee
{
	char N[50];
	int S;
	int HW;
};

int main()
{
	int i;
	struct Employee E[10];
	for(i=0;i<10;i++)
	{
		printf("Enter the Name:\n");
		scanf("%s",E[i].N);

		printf("Enter the Salary:\n");
		scanf("%d",&E[i].S);
	
		printf("Enter the HOURS OF WORK:\n");
		scanf("%d",&E[i].HW);
	}

	display(E);
	displayEight(E);
	displayTen(E);
	displayTwelve(E);


	return 0;
}

void display(struct Employee e[])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("\nWorker %d:\n",i+1);
		printf("Name:%s\nSalary:%d\nHours of Work:%d\n",e[i].N,e[i].S,e[i].HW);
		printf("\n");
		printf("\n");
	}
}

void displayEight(struct Employee e[])
{
	int i;
	int sum=0;

	printf("\nWorkers working for 8 hours or more with incremented Salaries:\n");
	for(i=0;i<10;i++)
	{
		if(e[i].HW>=8 && e[i].HW<10)
		{
			sum=0;
			sum=e[i].S+50;
			printf("Name:%s\n",e[i].N);
			printf("Final Salary:%d\n",sum);
		}
	}
}

void displayTen(struct Employee e[])
{
	int i;
	int sum=0;

	printf("\nWorkers working for 10 hours or more with incremented Salaries:\n");
	for(i=0;i<10;i++)
	{
		if(e[i].HW>=10 && e[i].HW<12)
		{
			sum=0;
			sum=e[i].S+100;
			printf("Name:%s\n",e[i].N);
			printf("Final Salary:%d\n",sum);
		}
	}
}

void displayTwelve(struct Employee e[])
{
	int i;
	int sum=0;

	printf("\nWorkers working for 12 hours or more with incremented Salaries:\n");
	for(i=0;i<10;i++)
	{
		if(e[i].HW>=12)
		{
			sum=0;
			sum=e[i].S+150;
			printf("Name:%s\n",e[i].N);
			printf("Final Salary:%d\n",sum);
		}
	}
}
