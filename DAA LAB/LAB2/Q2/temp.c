#include <stdio.h>
#include <stdlib.h>

int* GCD(int num)
{
	int i;
	int t=0;
	int *arr=calloc(1,num);
	for(i=2;i=<num;i++)
	{
		if(num%i==0)
		{
			arr[t++]=i;
			num=num/i;
			i=1;
		}
	}
	return arr;
}

int main()
{
	int *arr=GCD(32);
	for(int i=0;arr[i]!=0;i++)
	{
		printf("%d\t",arr[i]);
	}
}