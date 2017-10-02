#include<stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	int c;
	if(fp = fopen(*++argv,"a+"))
	{
		while( (c = fgetc(fp)) && c != EOF)
		{
			printf("%c",c);
		}
	}
	else
	{
		return 1;
	}
	fclose(fp);
	return 0;
}
