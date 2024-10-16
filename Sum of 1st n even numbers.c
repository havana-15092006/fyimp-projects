#include<stdio.h>
int main()
{
	int i,n,num,sum=0;
	printf("enter the value for n");
	scanf("%d",&n);

	for (i=1; i<=n; i++)
	{	printf("%d\n",2*i );
		sum=sum+(2*i);
	}
	printf("the sum of first %d even numbers is %d\n",n,sum);

}
