#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char  filename[128];
	int ch;
	
	printf("input the file's name: ");
	gets(filename); //�Ӽ��������ļ����������ļ������������filename��
	
	fp = fopen(filename, "r");
	if (NULL == fp)
	{
		printf("\nfile open error!");
		exit(1);
	}

	printf("------------------------File Begin:----------------------\n");
	ch = fgetc(fp); //���ļ��ж�һ���ַ���������ch
	while (feof(fp) == 0) //ʹ�ú���feof�ж�fpָ����ļ��Ƿ�������������ֵΪ0�����ļ�δ����
	{   
		putchar(ch); //������ch�е��ַ��������ʾ����
		ch = fgetc(fp); //���ļ��ж�һ���ַ���������ch
	}
	printf("\n------------------------ File End. ----------------------\n");

	fclose(fp);

	return 0;
}