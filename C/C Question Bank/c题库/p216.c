/*
����Ĺ��ܣ�
�������һ��m��m�����������������ڵ���������m(2<=m<=20)������Ԫ�شӼ�������(ֻ����int��)��
*/
#include <stdio.h>

int main(void)
{
	int arr[20][20];
	int i, j, m, max, maxi, maxj;

	/* �������Ľ���m */
	printf("Please input m:");  
	scanf("%d", &m);

	/* �Ӽ�������m*m����������ŵ���ά����arr�� */
	printf("Please input array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	/* ����ά����arr�ĵ�һ��Ԫ��arr[0][0]����max��Ϊ��ʼ�����ֵ���б�0���б�0����maxi��maxj��Ϊ��ʼ
		���ֵ���б���б�*/
	max = arr[0][0];
	maxi = 0;
	maxj = 0;
	
	/* ���������ֵ */
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("max=%d, i=%d, j=%d\n", max, maxi, maxj);

	return 0;
}