/* ����Ĺ��ܣ�
	���������n����Ļ����ʾ��Ӧ��ͼ����
*/
#include <stdio.h>

int main(void)
{
	int n;
	int i, j;

	printf("Please input n:");
	scanf("%d", &n);

	/* ���ͼ�ε��ϰ벿�֣���n�У�*/
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (i - 1); j++)   /* �����i�е�һ��@ǰ�Ŀո�*/
		{
			printf(" ");
		}
		printf("%c", '@'); /* �����i�е�һ��@*/
		if (i != n) /* �����ǰ�в��ǵ�n��*/
		{
			for (j = 1; j <= 2 * (n - i) - 1; j++) /* �����i�еڶ���@ǰ�Ŀո�*/
			{
				printf(" ");
			}
			printf("%c", '@'); /* �����i�еڶ���@*/
		}
		printf("\n");
	}
	
	/* ���ͼ�ε��°벿�֣���n-1�У�*/
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= (i - 1); j++)
		{
			printf(" ");
		}
		printf("%c", '@');
		for (j = 1; j <= 2 * (n - i) - 1; j++)
		{
			printf(" ");
		}
		printf("%c", '@');
	
		printf("\n");
	}
	
	return 0;
}