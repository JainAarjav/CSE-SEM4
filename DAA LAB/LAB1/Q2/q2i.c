#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v,i,j;
	printf("enter the vertices of the graph");
	scanf("%d",&v);
	int matrix[v][v];
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			matrix[i][j]=0;
		}
	}
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("IS THERE A EDGE BETWEEN %d and %d\n",i,j);
			printf("press Y for Yes N for no\n");
			char op,temp;
			scanf("%c",&temp);
			scanf("%c",&op);
			if(op=='y')
			{
				matrix[i][j]=1;
			}
		}
	}
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("%d \t",matrix[i][j]);
		}
		printf("\n");
	}
}