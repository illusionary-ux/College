#include <stdio.h>

int main(void)
{
	double base = 500, salary; //baseΪ����нˮ�������������ֵΪ500��salaryΪ���յ�нˮ
	int profit; //profitΪ����

	printf("Input profit:");
	scanf("%d", &profit); //��������
	
	/* ����profit��ֵ�������salary */
	if (profit <= 1000)
	{
		salary = base;
	}
	else if (profit <= 2000)
	{
		salary = base + profit * 0.1;
	}
	else if (profit <= 5000)
	{
		salary = base + profit * 0.15;
	}
	else if (profit <= 10000)
	{
		salary = base + profit * 0.2;
	}
	else
	{
		salary = base + profit * 0.25;
	}
	
	printf("salary=%.2f\n", salary); //���salary��ֵ
	
	return 0;
}