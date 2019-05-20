#include<stdio.h>
struct Balance
{
	char Name[50];
	int A;
	int B;
};

int main()
{
	int i;
	struct Balance Bal[10];
	for(i=0;i<5;i++)
	{
		printf("Enter the Name:\n");
		scanf("%s",Bal[i].Name);

		printf("Enter Account Number:\n");
		scanf("%d",&Bal[i].A);

		printf("Enter Balance:\n");
		scanf("%d",&Bal[i].B);

	}

	displayInfo(Bal);
	displayName(Bal);
	displayB(Bal);	
	return 0;
}

int displayInfo(struct Balance Ba[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nCustomer %d:\n",i+1);
		printf("Name:%s\nAccount Number:%d\nBalance:%d\n",Ba[i].Name,Ba[i].A,Ba[i].B);
		printf("\n");
		printf("\n");
	}
}

void displayName(struct Balance Ba[])
{
	int found=0;
	int i;
	printf("Customers with balance less than $200are:\n");
	for(i=0;i<5;i++)
	{
		if(Ba[i].B<200)
		{
			
			printf("Name:%s\n",Ba[i].Name);
		}
	}

}

void displayB(struct Balance Ba[])
{
	int i;
	int sum=0;
	int balance;
	printf("Customers with Incremented Balance are:\n");
	for(i=0;i<5;i++)
	{
		if(Ba[i].B>200)
		{
			sum=Ba[i].B;
			balance=sum+100;
			Ba[i].B=balance;
			printf("Name:%s\n",Ba[i].Name);
			printf("Balance:%d\n",Ba[i].B);
		}
	}

}



		
