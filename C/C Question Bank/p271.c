#include <stdio.h>

int main(void)
{
	int aa[20][20], i, j, m, n, qq, sum = 0;

	printf("������ m �� n: ");
	scanf("%d %d", &m, &n);
	printf("������ %d ��, ÿ�� %d ������:\n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &aa[i][j]);
		}
	}
	printf("������Ҫ�����֮�е��к�: ");
	scanf("%d", &qq);
	for (i = 0; i < m; i++)
	{
		sum = sum + aa[i][qq];
	}
	printf("\n�����ϸ�Ԫ��֮��Ϊ: %d", sum);
	return 0;
}