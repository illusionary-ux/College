#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sp
{
	char xh[11], xm[9], xb[3], kc[15];
	int cj;

};

int main(void)
{
	int n = 0;
	char a1[15];
	FILE * fp;
	struct sp ss;
	float sum = 0;

	printf("������Ҫ����ƽ���ɼ��Ŀγ����ƣ�");
	gets(a1);
	fp = fopen("xscj.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
		exit(0);
	}
	printf("\n������Ϊ��\n");
	while (!feof(fp))
	{
		if (fscanf(fp, "%s %s %s %s %d", ss.xh, ss.xm, ss.xb, ss.kc, &ss.cj) == 5)
		{
			if (strcmp(a1, ss.kc) == 0)
			{
				sum = sum + ss.cj;
				n++;
			}
		}
	}
	if (n == 0)
	{
		printf("�ļ���û������Ϊ��%s���Ŀγ�\n", a1);
	}
	else
	{
		printf("�γ̡�%s���� %d ��ѡѧ��ƽ���ɼ�Ϊ%.1f", a1, n, sum / n);
	}
	fclose(fp);
	return 0;
}
