#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	int j=0;
	
	char S[50];
	char c;
	int index[50];

	printf("Enter the String:\n");
	scanf("%1000[0-9a-zA-Z ]",S);
	
	int len=strlen(S);

	printf("Enter the Character to know its occurences:\n");
	scanf(" %c",&c);


	for(i=0;i<len;i++)
	{
		if(S[i]==c)
		{
			index[j]=i;
			i++;
			j++;
		}
	}

	printf("Occurences Are:\n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",index[i]);
	}
	printf("\n");
	
	return 0;
}

