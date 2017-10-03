#include<stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	int c;
	if(fp = fopen(*++argv,"a+"))
	{
		if(argc != 2)
		{
			puts("格式错误,格式为cat file");
			return -1;
		}
		while( (c = fgetc(fp)) && c != EOF)
		{
			printf("%c",c);
		}
	}
	else
	{
		puts("文件打开失败.");
		return 1;
	}
	fclose(fp);
	return 0;
}
