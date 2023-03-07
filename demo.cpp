#include<stdio.h>
int main()
{
	FILE *fptr,*fp;
	fptr=fopen("test.txt","w");
	fprintf(fptr,"Hello Good morning!");
	fclose(fptr);
	fptr=fopen("test.txt","r");
	fp=fopen("test1.txt","w");
	char c;
	while((c=fgetc(fptr))!=EOF)
	{
		fputc(c,fp);
	}
	fclose(fptr);
	fclose(fp);
	fp=fopen("test1.txt","r");
	while((c=fgetc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}

