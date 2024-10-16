#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char str[100],rev_str[100],c;
//str is the string we enter
//rev_str is the reversed string
//c is the constant used for swapping
	printf("enter any string to reverse\n");
	scanf("%s",str);
	l=strlen(str);
	strcpy(rev_str,str);
	for(i=0; i<l/2; i++)
	{	c=str[i];
		rev_str[i]=rev_str[l-1-i];
		rev_str[l-1-i]=c;
	}
	printf("the entered string is %s\n",str);
	printf("the reversed string is %s\n",rev_str);


}
