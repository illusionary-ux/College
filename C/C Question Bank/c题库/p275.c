#include <stdio.h>
#include <string.h>

int main(void)
{
	char a1[128], qq;
	int i, j, a2[10] = {0}, m;

	printf("������һ���ַ���");
	gets(a1);
	m = strlen(a1);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a1[i] == '0' + j)
			{
				a2[j]++;
			}
		}
	}
	printf("ͳ�ƽ��Ϊ��\n");
	for (j = 0; j < 10; j++)
	{
		if (a2[j] != 0)
		{
			qq = '0' + j;
			printf("%c-%d\n", qq, a2[j]);
		}
	}
	return 0;
}