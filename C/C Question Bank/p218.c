/*
����Ĺ���:
	�������һ��m��m������ܱ�Ԫ��֮�ͣ�m(2<=m<=20)������Ԫ�شӼ������롣
*/
#include<stdio.h>

int main(void)
{
	int sum = 0, arr[20][20];
	int m, i, j;
	
	/* ����������m */
	printf("Please input m:");
	scanf("%d", &m);

	/* �Ӽ�������m��m�����ŵ���ά����arr�� */
	printf("Please input array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	/* ��m��m�����ܱ�Ԫ��֮�� */
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((0 == i) || (0 == j) || ((m - 1) == i) || ((m - 1) == j)) 
			{
				sum = sum + arr[i][j];
			}
		}
	}

	printf("sum=%d\n", sum);
	
	return 0;
}