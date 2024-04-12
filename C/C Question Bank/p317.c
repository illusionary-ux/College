#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch;
	char sfilename[100], dfilename[100];
	FILE *fp1, *fp2;

	printf("Please input sourceFilename: ");
	gets(sfilename); //����Դ�ļ���
	printf("Please input destinationFilename: ");
	gets(dfilename); //����Ŀ���ļ���

	fp1 = fopen(sfilename, "rb"); //��Դ�ļ�
	/* �ж�Դ�ļ��Ƿ񱻴򿪣����fp1����NULL�����ļ��򲻿��������Ӧ��Ϣ������2��Ϊmain�����ķ���ֵ��
		�����ļ�����*/
	if (fp1 == NULL)
	{
		printf("\nsource File (%s) Open Error!\n", sfilename);
		exit(2); //�������򣬲������˳���2
	}
	fp2 = fopen(dfilename, "wb"); //��Ŀ���ļ�
	/* �ж�Ŀ���ļ��Ƿ񱻴򿪣����fp2����NULL�����ļ��򲻿��������Ӧ��Ϣ������3��Ϊmain�����ķ���ֵ��
		�����ļ�����*/
	if (fp2 == NULL)
	{
		printf("\ndestination File (%s) Create Error!\n", dfilename);
		fclose(fp1); //�ر�Դ�ļ�
		exit(3); //�������򣬲������˳���3
	}
	/* ��Դ�ļ��ж������ݲ�д��Ŀ���ļ��� */
	ch = fgetc(fp1); //��Դ�ļ��ж�һ���ַ���������ch
	while (feof(fp1) == 0) //ʹ��feof�����ж�Դ�ļ��Ƿ�������ļ�����feof�ĺ���ֵΪ����������ļ�û�н�������ֵΪ0
	{
		
		if (fputc(ch, fp2) == EOF) //��ch�е��ַ�д��Ŀ���ļ��У����fputc�ĺ���ֵΪEOF��˵��д��������
		{
			printf("\nwriting destination File (%s) Error!\n", dfilename);
			fclose(fp1); //�ر�Դ�ļ�
			fclose(fp2); //�ر�Ŀ���ļ�
			exit(4); //�������򣬲������˳���4
		}
		ch = fgetc(fp1); //��Դ�ļ��ж�һ���ַ���������ch
		
	}
	printf("\ncopy %s to %s successed!\n", sfilename, dfilename); //������Ƴɹ�����Ϣ
	fclose(fp1); //�ر�Դ�ļ�
	fclose(fp2); //�ر�Ŀ���ļ�
	return 0; ////���������������������˳���0
}
