#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	int j=0;
	char S[50];
	char c;
	int index=0;

	printf("Enter the String:\n");
	scanf("%1000[0-9a-zA-Z ]",S);


	int len=strlen(S);

	printf("Enter the Character to know its first occurence:\n");
	scanf(" %c",&c);


	for(i=0;i<len;i++)
	{
		if(S[i]==c)
		{
			index=i;
			i++;
		}
	}
	
	printf("\nLast Occurence:%d\n\n",index);

	return 0;
}
