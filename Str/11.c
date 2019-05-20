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



	printf("Reversed String is %s\n",R);


	return 0;
}	
