#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct qq
{
	char xh[11], xm[9], kc[15], xb[3];
	int cj;
};

int main(void)
{
	struct qq ss;
	int n = 0;
	FILE *fp;
	char a1[9];

	printf("������Ҫ���ҳɼ���ѧ��������");
	gets(a1);

	fp = fopen("xscj.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
	}
	printf("\n���ҽ��Ϊ��\n");
	while (!feof(fp))
	{
		if (fscanf(fp, "%s %s %s %s %d", ss.xh, ss.xm, ss.xb, ss.kc, &ss.cj) == 5)
		{
			if (strcmp(a1, ss.xm) == 0)
			{
				n++;
				printf("%d %-10s, %-8s, %-2s, %-14s, %d\n", n, ss.xh, ss.xm, ss.xb, ss.kc, ss.cj);
			}
		}

	}
	if (n == 0)
	{
		printf("�ļ���û���ҵ�����Ϊ��%s����ѧ��\n", a1);
	}
	fclose(fp);
	return 0;
}