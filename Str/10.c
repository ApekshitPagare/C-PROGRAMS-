#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char S[50];


	printf("Enter the String:\n");
	scanf("%10[0-9a-zA-Z ]",S);

	int len=strlen(S);
	printf("\n%d\n\n",len);
	
	int word=0;

	for(i=0;S[i]!='\0';i++)
	{
		if(S[i]==' ' || S[i]==S[len-1])
		{
			word++;
		}
	}

	printf("Number of words is %d\n",word);

	return 0;

}
		
