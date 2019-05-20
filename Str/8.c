#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char S[50];
	
	int count1=0;
	int count2=0;
	int count3=0;

	printf("Enter the String:\n");
	scanf("%s",S);
	int len=strlen(S);

	printf("%d\n",len);


	for(i=0;S[i]!='\0';i++)
	{
		if((S[i]>='a' && S[i]<='z') || (S[i]>='A' && S[i]<='Z'))
		{
			count1++;
		}
		else if(S[i]>='1' && S[i]<='9')
		{
			count2++;
		}
		else
		{
			count3++;
		}
	}

	printf("Count of Alphabets:%d\n",count1);
	printf("Count of Numbers:%d\n",count2);
	printf("Count of S.Characters:%d\n",count3);

	return 0;
}
