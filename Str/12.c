#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int j=0;
	char S[50];
	char R[50];

	printf("Enter the String:\n");
	scanf("%10[0-9a-zA-Z ]",S);

	int len=strlen(S);
	printf("\n%d\n\n",len);
	
	for(i=len-1;i>=0;i--)
	{
		R[j]=S[i];
		j++;
	}
	
	R[j]='\0';

	int len1=strlen(R);

	int found=0;

	printf("Reversed String is %s\n",R);

	for(i=0;i<len;i++)
	{
		for(j=0;j<len1;j++)
		{
			if(S[i]==R[j])
			{
				found=1;
				j++;
				i++;
			}
			else
			{
				found=0;
			}
		}
	}
	
	if(found==1)
	{
		printf("PALINDROME\n");
	}
	else
	{
		printf("No\n");
	}
			


	return 0;
}	
