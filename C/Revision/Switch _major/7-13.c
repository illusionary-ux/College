#include<stdio.h>

int main(void)
{
	int n, i, j, k;
	int arr[6][6], hangmax, flag, hangmaxlie;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	
	for (k = 0; k < n; k++)//����ɨ�� 
	{
		hangmax = arr[k][0];
		hangmaxlie = 0;//��ʼ��hangmax hangmaxlie
		for (j = 0; j < n; j++) //�ҳ���k�����ֵ ������¼������ָ�� 
		{
			if (arr[k][j] > hangmax)
			{
				hangmax = arr[k][j];
				hangmaxlie = j;
			}
		}
		flag = 1;
		for (i = 0; i < n; i++)
		{
			
			if(arr[i][hangmaxlie] < hangmax)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d %d", k, hangmaxlie);
			break;
		}
	}
	if (flag == 0)
	{
		printf("NONE");
	}
	
	return 0;
}
