/*
����X��Y�η�������YΪ�����������Ǹ�������0����XΪʵ�͡�
ע�⣬�����в���ʹ�ÿ⺯��pow��ʹ��ͬ���ı��������������� */
#include <stdio.h>

int main(void)
{
	double x, result = 1;
	int y, i;

	printf("Input x, y:");
	scanf("%lf,%d", &x, &y); //����x��y��ֵ
	
	/* yΪ����������x��y�η� */
	if (y > 0)
	{
		for (i = 1; i <= y; i++)
		{
			result = result * x;
		}
	}
	/* yΪ����������x��y�η� */
	else if (y < 0)
	{
		for (i = 1; i <= (-1) * y; i++)
		{
			result = result * x;
		}
		result = 1 / result;
	}
	/* yΪ�㣬x��y�η�Ϊ1 */
	else
	{
		result = 1;
	}

	printf("%f^%d=%f\n", x, y, result); //������

	return 0;
}