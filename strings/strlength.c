#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	printf("enter a string");
	gets(c);
	int i;
	for(i=0;c[i]!='\0';i++);
	printf("length %d\n",i);
	printf("length using function %d",strlen(c));
	return 0;
}