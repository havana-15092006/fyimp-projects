#include<stdio.h>
int main()
{
	int opt,n;
	float  a,b, ans;
	printf("enter two numbers ");
	scanf("%f\n%f",&a,&b);
	printf("choose your option\n 1 add \n2 subtract \n3 multiply\n4 divide\n 5 percentage\n6 average");
	scanf("%d",&opt);
	switch(opt)
	{
	case 1:
		ans=a+b;
		printf("sum=%.2f\n",ans);
		break;
	case 2:
		ans= a-b;
		printf("sub=%.2f\n",ans);
		break;
	case 3:
		ans= a*b;
		printf("product=%.2f\n",ans);
		break;
	case 4:
		ans= a/b;
		printf("div=%.2f\n",ans);
		break;
	case 5:
		printf("enter the percentage no");
		scanf("%d",&n);
		ans=(a*n)/100;
		printf("percentage=%.2f\n", ans);
		break;
	case 6:
		ans= (a+b)/2;
		printf("avg=%2f\n",ans);
		break;
	}
}
