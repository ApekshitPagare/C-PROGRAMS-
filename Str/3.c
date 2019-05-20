#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char S[50];
	char P[50];

	printf("Enter the String:\n");
	scanf("%s",S);

	printf("Enter the String:\n");
	scanf("%s",P);
	
	
	
	strcat(P,S);	
	
	printf("Concatenated String is :\n");
	printf("%s\n",P);
	printf("\n");

	

	return 0;
}
