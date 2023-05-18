#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	printf("enter");
	gets(c);
	int i,j,k;
	for(i=0;c[i]!='\0';i++);
	for(k=0,j=i-1;((c[j]==c[k])&&(k<=j));k++,j--);
	if(k>j)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
	return 0;
}