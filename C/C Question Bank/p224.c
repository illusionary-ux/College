#include <stdio.h>

int main(void)
{
	int total = 1; //����total������ŵ�i�������������n��ʱʣ1�����ӣ�����total�ĳ�ֵΪ1
	int i, n;

	printf("Please input n:");
	scanf("%d", &n); //����n��ֵ

	/* �����i�������������i=1ʱ���������total��ֵ��Ϊ��һ��������� */
	for (i = n - 1; i >= 1; i--)
	{
		total = 2 * (total + 1);
	}

	printf("total = %d\n", total); //�����һ���������

	return 0;
}

