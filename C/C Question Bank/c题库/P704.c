#include <stdio.h>

int main(void)
{
	int i, k, sum, m, n, count, arr[1000];

	printf("Please input an integer:");
	scanf("%d", &m); //��������m

	/* ��Ϊ1��2��3��4��5��Ȼ��������������ֻ��Ҫ����ж�6~m֮����� */
	for (n=6; n<=m; n++)
	{
		/* �ҳ�n�����ӣ����������Ӵ�������arr�У�count������¼n�ж��ٸ����� */
		count = 0;
		for (k=1; k<=n/2; k++)
		{
			if (n % k == 0)
			{
				arr[count] = k;
				count++;
			}
		}
		/* ��n�ĸ�������ӣ�������֮�ʹ���ڱ���sum�� */
		sum = 0;
		for (i=0; i<count; i++)
		{
			sum = sum + arr[i];
		}
		/* ���n����sum����nΪ���� */
		if (n == sum)
		{
			printf("%6d is a wanshu", n); //���n��ֵ
			/* ���n�ĸ������� */
			for (i=0; i<count; i++)
			{
				printf("%5d", arr[i]);
			}
			printf("\n");
		}
	}

	return 0;
}
