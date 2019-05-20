#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0;
	int A[SIZE][SIZE];
	int det=0;
	int a, b, c, d, e, f, x, y, z;

	
	printf("Enter the Elements:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	a=A[0][0];
	b=A[0][1];
	c=A[0][2];
	d=A[1][0];
	e=A[1][1];
	f=A[1][2];
	x=A[2][0];
	y=A[2][1];
	z=A[2][2];

	det=(a*((e*z)-(f*y)))-(b*((d*z)-(f*x)))+(c*((d*y)-(e*x)));


	printf("Determinant is %d\n",det);

	return 0;
}
