#include<stdio.h>
struct Student
{
	char Name[50];
	int A;
	int R;
	char Address[100];
};

int main()
{
	int i;
	struct Student Stu[5];
	for(i=0;i<5;i++)
	{
		printf("Enter the Name:\n");
		scanf("%s",Stu[i].Name);

		printf("Enter Age:\n");
		scanf("%d",&Stu[i].A);

		printf("Enter Roll Number:\n");
		scanf("%d",&Stu[i].R);

		printf("Enter Address:\n");
		scanf("%s",Stu[i].Address);

	}

	displayInfo(Stu);
	displayName(Stu);
	displayR(Stu);
	displayinfo(Stu);

	return 0;
}

int displayInfo(struct Student S[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nStudent %d:\n",i+1);
		printf("Name:%s\nAge:%d\nRoll Number:%d\nAddress:%s\n",S[i].Name,S[i].A,S[i].R,S[i].Address);
		printf("\n");
		printf("\n");
	}
}

void displayName(struct Student S[])
{
	int found=0;
	int i;
	printf("Students with Age 14 are:\n");
	for(i=0;i<5;i++)
	{
		if(S[i].A==14)
		{
			
			printf("Name:%s\n",S[i].Name);
		}
	}

}

void displayR(struct Student S[])
{
	int found=0;
	int i;
	printf("Students with Even Roll Number are:\n");
	for(i=0;i<5;i++)
	{
		if(S[i].R%2==0)
		{
			printf("Name:%s\n",S[i].Name);
		}
	}

}


int displayinfo(struct Student S[])
{
	int i;
	int r;
	printf("Enter the Roll Number:\n");
	scanf("%d",&r);

	for(i=0;i<5;i++)
	{
		if(S[i].R==r)
		{
			printf("\nStudent %d:\n",i+1);
			printf("Name:%s\nAge:%d\nRoll Number:%d\nAddress:%s\n",S[i].Name,S[i].A,S[i].R,S[i].Address);
			printf("\n");
			printf("\n");
			break;
		}
	}
}
		
