/* 
����Ĺ��ܣ�
	�������һ��m��m����ĶԽ�����Ԫ��֮�ͣ�m(2<=m<=20)������Ԫ�شӼ������롣
*/

#include <stdio.h>

int main(void)
{
	int sum = 0, arr[20][20];
	int m, i, j;

	/* ���������� */
	printf("Please input m:");
	scanf("%d", &m);

	/* ������� */
	printf("Please input array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	/* ����������Խ���Ԫ��֮�� */
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((i == j) || ((i + j) == (m - 1)))  
			{
				sum = sum + arr[i][j];
			}
		}
	}

	printf("sum=%d\n", sum);
	
	return 0;
}