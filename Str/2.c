#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char S[50];
	char P[50];
	int j=0;

	printf("Enter the String:\n");
	scanf("%s",S);
	
	int len=strlen(S);
	
	strcpy(P,S);	
	
	printf("Copied String is :\n");
	printf("%s\n",P);
	printf("\n");

	

	return 0;
}
