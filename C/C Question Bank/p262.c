#include <stdio.h>

int main(void)
{
	int m, n, aa[20][20], i, j, qq;

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
	printf("������Ҫ��ʾ�е��к�: ");
	scanf("%d", &qq);
	printf("\n���е�����Ϊ: ");
	for (i = 0; i < m; i++)
	{
		printf("%d ", aa[i][qq]);
	}
	return 0;

}