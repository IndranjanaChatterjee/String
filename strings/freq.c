#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	printf("enter the string");
	gets(c);
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	int i,sum=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==ch)
		{
			++sum;
		}
	}
	printf("%d",sum);
	return 0;
	
}