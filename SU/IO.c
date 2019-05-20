#include<stdio.h>

struct Student
{
	char N[50];
	int A;
	int Num;
};

int display(struct Student S[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Name:%s\nAge:%d\nNumber:%d\n",S[i].N,S[i].A,S[i].Num);
	}
}


int main()
{
	int i;
	struct Student Stu[5];
	for(i=0;i<5;i++)
	{
		printf("Enter the Name:\n");
		scanf("%s",Stu[i].N);
	
		printf("Enter the Age:\n");
		scanf("%d",&Stu[i].A);

		printf("Enter the Number:\n");
		scanf("%d",&Stu[i].Num);
	}

	display(Stu);

	return 0;

}
