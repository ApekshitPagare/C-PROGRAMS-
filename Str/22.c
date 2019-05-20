#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	char S[50];
	int j=0;
	int found=0;
	char ch;
	int index=0;

	printf("Enter the String:\n");
	scanf("%1000[0-9a-zA-Z ]",S);

	int len=strlen(S);

	printf("Enter the character to know and remove Last occurence:\n");
	scanf(" %c",&ch);
	
	found=1;

	for(i=0;i<len;i++)
	{
		if(S[i]==ch)
		{				
			index=i;
			i++;
		}

	}
	printf("Last Index is :%d\n",index);
		
	if(found==1)
	{
		for(i=index;i<len;i++)
		{
			S[i]=S[i+1];
		}
	len--;
	printf("String is %s\n",S);
	}

	return 0;
}
