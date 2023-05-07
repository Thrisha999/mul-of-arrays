#include<stdio.h>
void main()
{
	
	int a[10][10],b[10][10],c[10][10],i,j,k,sum=0,r1,r2,c1,c2;
	printf("enter the no. of rows you want in a matrix:\n");
	scanf("%d",&r1);
	printf("enter the no. of rows you want in a matrix:\n");
	scanf("%d",&r2);
	printf("enter the no. of columns you want in a matrix:\n");
	scanf("%d",&c1);
	printf("enter the no. of columns you want in a matrix:\n");
	scanf("%d",&c2);
	printf("enter the matrix1 elements:\n");
	for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix form of the elements of matrix1 is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the matrix2 elements:\n");
		for(i=0;i<r2;i++)
    {
    	for(j=0;j<c2;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
	}
	printf("the matrix form of the elements of matrix2 is:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}		
	if(r2==c1)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		printf("multiplication of two matrices is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("matrices of entered order is not eligible for multiplication");
	}
}
