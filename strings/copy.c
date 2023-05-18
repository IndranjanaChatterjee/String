#include<stdio.h>
#include<string.h>
int main()
{
	char c[100],ch[100],cc[100];
	printf("enter");
	gets(c);
	int i;
	for(i=0;c[i]!='\0';i++)
	{
		ch[i]=c[i];
	}
	ch[i]='\0';
	printf("%s\n",ch);
	printf("with function %s ",strcpy(cc,c));
	return 0;
}