/* 
����Ĺ��ܣ�
���������n����Ļ����ʾ��Ӧ��ͼ���� 
*/
#include <stdio.h>

int main(void)
{
	int n;
	int i, j;

	printf("Please input n:");
	scanf("%d", &n);

	/* ������ε��ϰ벿�֣���n�У�*/
	for (i = 1; i <= n; i++)   
	{
		for (j = 1; j <= n - i; j++) /* �����i�е���ĸǰ�Ŀո� */
		{
			printf(" ");
		}
		printf("%c", 'a'+(i-1));  /* �����i�еĵ�һ����ĸ */
		
		/* �����ǰ�в��ǵ�1�У����ڵ�1����ĸ������ո�Ȼ���������2����ĸ */
		if (i > 1)
		{
			for (j = 1; j <= 2 * i - 3; j++)
			{
				printf(" ");
			}
			printf("%c", 'a' + (i - 1));
		}
		printf("\n");
	}
	
	/* ������ε��°벿�֣���n-1�У�*/
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		printf("%c", 'a' + (i - 1));
		if (i > 1)
		{
			for (j = 1; j <= 2 * i - 3; j++)
			{
				printf(" ");
			}
			printf("%c", 'a' + (i - 1));
		}
		printf("\n");
		
	}

	return 0;
}