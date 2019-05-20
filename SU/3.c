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

	display(Stu);

	return 0;
}

int display(struct Student S[])
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
