#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int ch;
	char filename[128];

	printf("input the file's name: ");
	gets(filename); //�����ļ���

	fp = fopen(filename, "r");
	if (NULL == fp)
	{
		printf("\nfile open error!");
		exit(1);
	}

	printf("------------------------File Begin:----------------------\n");
	ch = fgetc(fp); //��fpָ����ļ��ж�һ���ַ���������ch
	while (feof(fp) == 0) //�ļ�û�н���
	{
		if ((char)ch == '*') //����ch�е��ַ���*
		{
			putchar('@'); //����Ļ�����@
		}
		else
		{
			putchar(ch); //����Ļ���������ch�е��ַ�
		}
		ch = fgetc(fp); //��fpָ����ļ��ж�һ���ַ���������ch
	}
	printf("\n------------------------ File End. ----------------------\n");

	fclose(fp);
	return 0;
}
