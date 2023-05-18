#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	gets(c);
	int i,k,j;
	printf("In alphabetical order");
	for(i=1;i<=26;i++)
	{
		for(j=0;c[j]!='\0';j++)
		{
			k=(int)(c[j]);
			if(k>=65 && k<=90)
			{
				if((k-64)==i)
				{
					printf("%c",c[j]);
				}
			}
			else if(k>=97 && k<=122)
			{
				if((k-96)==i)
				{
					printf("%c",c[j]);
				}
			}
		}
	}
	return 0;
	
}