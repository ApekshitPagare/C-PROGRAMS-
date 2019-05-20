#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char S[50];
	int j=0;
	int found=1;
	char ch;

	printf("Enter the String:\n");
	scanf("%1000[0-9a-zA-Z ]",S);

	int len=strlen(S);

	printf("Enter the character to know and remove First occurence:\n");
	scanf(" %c",&ch);

	for(i=0;i<len;i++)
	{
		if(S[i]==ch)
		{
			for(j=i;j<len;j++)
			{
				found=1;
				break;
			}
		}
	}	
		
	if(found==1)
	{
		for(i=0;i<len;i++)
		{
			S[i]=S[i+1];
		}
	len--;
	}
	

	printf("String is %s\n",S);

	return 0;
}
