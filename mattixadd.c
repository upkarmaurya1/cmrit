#include<stdio.h>
int main()
{
	int r1,r2,c1,c2,i,j;
	printf("enter row and column for 1st matrix=");
	scanf("%i %i",&r1,&c1);
	
	printf("enter row and column for 2nd matrix=");
	scanf("%i %i",&r2,&c2);
	
	if(r1==r2 &&c1==c2)
	{
		int a[r1][c1],b[r2][c2],sum[r1][c1];
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		
			printf("enter no. a[%i][%i] == ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		
			printf("enter no. b[%i][%i] == ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			sum[i][j]=a[i][j]-b[i][j];
			printf("%i  ",sum[i][j]);
		
		}
		
		printf("\n");
	}
	}
	else
	{
		printf("error");
	}
	
	return 0;
}