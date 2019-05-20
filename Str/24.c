#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	int j=0;
	char S[50];
	char c;
	char ch;
	int index=0;

	printf("Enter the String:\n");
	scanf("%1000[0-9a-zA-Z ]",S);


	int len=strlen(S);

	printf("Enter the Character to know its first occurence:\n");
	scanf(" %c",&c);
	
	printf("Enter the character to replace it with:\n");
	scanf(" %c",&ch);

	for(i=0;i<len;i++)
	{
		if(S[i]==c)
		{
			S[i]=ch;
			break;
		}
	}
	
	printf("\nString:%s\n\n",S);

	return 0;
}
