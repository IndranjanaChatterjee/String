#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	printf("enter the string");
	gets(c);
	int a;
	int v=0,con=0,dig=0,sp=0;
	int i,sum=0;
	for(i=0;c[i]!='\0';i++)
	{
		a=(int)c[i];
		if((a>=65 && a<=90)||(a>=97 && a<=122))
		{
			if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
			{
				v=v+1;
			}
			else
			{
				con=con+1;
			}
		}
		else if(a>=48 && a<=57)
		{
			dig=dig+1;
		}
		else if(a==32)
		{
			sp=sp+1;
		}
		
	}
	printf("%d\n",v);
	printf("%d\n",con);
	printf("%d\n",dig);
	printf("%d\n",sp);
	return 0;
	
}