#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp, *fpA, *fpB;

	int data1, data2, line = 0;
	char op;

	fp = fopen("Comp.txt", "r");
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}
	fpA = fopen("CompA.txt", "r");
	if (NULL == fpA)
	{
		printf("can not open file!\n");
		fclose(fp); //�ȹر�ǰ���Ѿ��򿪵��ļ�
		exit(1); //�˳�����
	}
	fpB = fopen("CompB.txt", "r");
	if (NULL == fpB)
	{
		printf("can not open file!\n");
		fclose(fp); //�ȹر�ǰ���Ѿ��򿪵��ļ�
		fclose(fpA); //�ȹر�ǰ���Ѿ��򿪵��ļ�
		exit(1); //�˳�����
	}

	/*����ѭ����fscanf�����ã��ֱ�������ļ��ж�ȡ�������һ����ʽ����fpָ����ļ��ж�һ������������data1,��fpAָ����ļ��ж�һ���ַ���������op����fpBָ����ļ��ж�һ������������data2*/
	while ((fscanf(fp, "%d", &data1) ==1) && (fscanf(fpA, "%c\n", &op) ==1) && (fscanf(fpB, "%d", &data2) ==1))		
	{
		line++;
		if (op == '+')
		{
			printf("Line %03d:  %5d + %-5d = %-6d\n", line, data1, data2, data1 + data2);
		}
		else
		{
			printf("Line %03d:  %5d - %-5d = %-6d\n", line, data1, data2, data1 - data2);
		}
	}
	
	fclose(fp);
	fclose(fpA);
	fclose(fpB);
	return 0;
}