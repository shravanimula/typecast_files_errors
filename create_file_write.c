#include<stdio.h>
#define SIZE 100
int main()
{
	FILE *fp;
	char str[SIZE];
	int i;
	scanf("%[^\n]s",str);
	if((fp=fopen("file1.txt","w"))==NULL)
	{
		printf("File is not created Successfully\n");
	}
	else
	{
		for(i=0;str[i]!='\0';i++)
		{
			putc(str[i],fp);
		}
	}
	fclose(fp);	
	return 0;
}
