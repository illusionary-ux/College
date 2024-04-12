#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int data1, data2;
	char op;

	fp = fopen("Comp.txt", "r"); //���ļ�
	if (NULL == fp) //�ж��ļ��Ƿ��
	{
		printf("can not open file!\n");
		exit(1); //����ļ��򲻿�����ֹ����
	}

	fscanf(fp, "%d %c %d", &data1, &op, &data2); //���ļ��ж����ݸ�������data1��op��data2

	if (op == '+') //����ļ��ж������������+��ִ�мӷ�����
	{
		printf("%d + %d = %d\n", data1, data2, data1 + data2);
	}
	else //����ļ��ж������������-��ִ�м�������
	{
		printf("%d - %d = %d\n", data1, data2, data1 - data2);
	}

	fclose(fp); //�ر��ļ�

	return 0;
}