#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1, root2,root;
//a is the coefficient of x^2//
//b is the coefficient of x//
//c is the constant//
	printf("the coefficient of x^2 ie a=");
	scanf("%.2f",&a);
	printf("the coefficient of x  ie b=");
	scanf("%.2f",&b);
	printf("the constant term ie c=");
	scanf("%.2f",&c);
	float det;
	det= ((b*b) -( 4*a*c) );
	printf("the determiner is %.2f\n",det);
	if (det>0)
	{
		root1=(-b-sqrt(det))/(2*a);
		root2=(-b+sqrt(det))/(2*a);
		printf("the solution is %.2f\n%.2f",root1,root2);
	}

	else if (det==0)
	{	root=(-b)/(2*a);
		printf("the solution is %.2f\n",root);
	}

	else
	{	printf("the given equation has a solution which is a complex number");
		float r_part =(-b)/(2*a);
		float i_part =sqrt(-det)/(2*a);
		printf("the sol=%.2f+%.2fi\n",r_part,i_part);
		printf("%.2f-%.2fi",r_part,i_part);

	}
}
