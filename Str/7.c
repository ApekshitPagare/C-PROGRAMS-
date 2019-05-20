#include<stdio.h>
#include<string.h>

int main()
{
	char N[50];
	int i;

	printf("Enter the String:\n");
	scanf("%s",N);

	for(i=0;N[i]!='\0';i++)
	{
		if(N[i]>='A' && N[i]<='Z')
		{
			N[i]=N[i]+32;
		}
		else
		{
			N[i]=N[i]-32;
		}
	}

	printf("String in is %s\n",N);


	return 0;
}
