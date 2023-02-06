#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
	int t=a>b?b:a;
	int opcount=1;
	while(a%t!=0 || b%t!=0)
	{
		opcount++;
		t--;
	}
	printf("%d",opcount);
	return t;
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("\n%d\n",GCD(a,b));
}