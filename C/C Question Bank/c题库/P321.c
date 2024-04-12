#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int data1, data2, line = 0; //����line������Ŵ��ļ��ж����˶���������
	char op;

	fp = fopen("Comp.txt", "r");
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}

	while (fscanf(fp, "%d %c %d", &data1, &op, &data2) == 3) //���fscanf�ĺ���ֵΪ3��˵�����ļ��ж���3�����ݷֱ𸳸�data1, op, data2		
	{
		line++; //��������1
		if (op == '+') //���мӷ�����
		{
			printf("Line %03d:  %5d + %-5d = %-6d\n", line, data1, data2, data1 + data2);
		}
		else //���м�������
		{
			printf("Line %03d:  %5d - %-5d = %-6d\n", line, data1, data2, data1 - data2);
		}
	}

	fclose(fp);

	return 0;
}