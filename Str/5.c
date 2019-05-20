#include<stdio.h>
#include<string.h>
int main()
{
	char S[50];
	int i;

	printf("Enter the String:\n");
	scanf("%10[0-9a-zA-Z ]",S);

	for(i=0;S[i]!='\0';i++)
	{
		if(S[i]>='a' && S[i]<='z');
		{
			S[i]=S[i]-32;
		}
	}

	printf("String is %s\n",S);

	return 0;
}

	
