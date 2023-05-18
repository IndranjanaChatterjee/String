#include<stdio.h>
#include<string.h>
int main()
{
	char c[100],ch[100],cc[100];
	printf("enter");
	gets(c);
	gets(ch);
	int l=strlen(c);
	int len=strlen(ch);
	int i;
	for(i=0;i<l;i++)
	{
		cc[i]=c[i];
	}
	for(i=0;i<len;i++)
	{
		cc[l+i]=ch[i];
	}
	printf("concatenated %s",cc);
	return 0;
}