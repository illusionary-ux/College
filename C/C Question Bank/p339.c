#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct xx
{
	char xh[11], xm[9], xb[3], kc[15];
	int cj;
};

int main(void)
{
	struct xx ss;
	FILE *fp;
	int n = 0, m = 0;
	char a1[15];

	printf("������Ҫ���㼰���ʵĿγ����ƣ�");
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
				n++;
				if (ss.cj >= 60)
				{
					m++;
				}
			}
		}
	}
	if (n == 0)
	{
		printf("�ļ���û������Ϊ��%s���Ŀγ�\n", a1);
	}
	else
	{
		printf("�γ̡�%s���� %d ��ѡѧ�����м��� %d �ˣ�������Ϊ%.1f", a1, n, m, (float)m/n);
	}
	fclose(fp);
	return 0;
}