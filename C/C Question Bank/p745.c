/*
����Ĺ��ܣ�
	��������������m��n���������Լ������С��������
	ע�����Լ��Ҳ��������ӣ�ָĳ����������������������һ����
	�����������еı�����Ϊ���ǵĹ�������������С��һ����������Ϊ������������С��������
*/
#include <stdio.h>

int main(void)
{
	int m, n, i, min, zdgys, zxgbs; //����zdgys����������Լ��������zxgbs���������С������

	printf("please input two integer numbers:");
	scanf("%d%d", &m, &n); //��������������m��n
	
	/* ��m��n�е���Сֵ��������k */
	if (m > n)
	{
		min = n;
	}
	else
	{
		min = m;
	}
	
	/* �����Լ�� */
	for (i = min; i >=1; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			zdgys = i;
			break;
		}
	}
	
	zxgbs = m * n / zdgys; //����С���������ñ��ʽ����ѧ���ֳɵĹ�ʽ��

	printf("the greatest common  divisor is %d\n", zdgys); //������Լ��
	printf("the least common  multiple is %d\n", zxgbs); //�����С������

	return 0;
}