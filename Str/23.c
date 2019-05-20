#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char S[50];
	int j=0;
	char ch;

	printf("Enter the String:\n");
	scanf("%1000[0-9a-zA-Z ]",S);

	int len=strlen(S);

	printf("Enter the character to know and remove first occurence:\n");
	scanf(" %c",&ch);

	for(i=0;i<len;i++)
	{
		if(S[i]==ch)
		{
			for(j=i;j<len;j++)
			{
				S[j]=S[j+1];

			}

		len--;

		i--;
		}
	}

	printf("String is %s\n",S);

	return 0;
}
