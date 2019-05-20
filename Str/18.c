#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	int j=0;
	int k=0;
	char c;
	char S[50];
	int index[50];
	int count=0;
	int freq[256]={0};

	int max=0;


	printf("Enter the String:\n");
	scanf("%1000[0-9a-zA-Z ]",S);

	int len=strlen(S);

	for(i=0;i<len;i++)
	{
		freq[S[i]]=0;
	}
	
	for(i=0;i<len;i++)
	{
		count=0;
		printf("Enter the Character to know its occurences:\n");
		scanf(" %c",&c);
	
	
		for(j=0;j<len;j++)
		{
			if(S[j]==c)
			{
				count++;
				freq[S[j]]=count;
				j++;
			}

		}
		printf("Count:%d\n",freq[S[i]]);
	}
	
	max=0;
	for(i=0;i<len;i++)
	{
		if(freq[S[i]]>freq[S[max]])
		{
			S[max]=S[i];
		}
	}
	printf("%c has highest frequency of %d\n",S[max],freq[S[max]]);



	return 0;
}
