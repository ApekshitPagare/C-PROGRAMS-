#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char S[50];
	
	int count1=0;
	int count2=0;


	printf("Enter the String:\n");
	scanf("%s",S);
	int len=strlen(S);

	printf("%d\n",len);


	for(i=0;S[i]!='\0';i++)
	{
		if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u' || 
		   S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U' )
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}

	printf("Count of Vowels:%d\n",count1);
	printf("Count of Consonants:%d\n",count2);

	return 0;
}
