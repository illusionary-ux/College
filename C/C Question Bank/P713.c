#include <stdio.h>

int main(void)
{
	int i, year, month, day, sum = 0, yue[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("Please input: year-month-day\n");
	scanf("%d-%d-%d", &year, &month, &day); //����������

	/* ����ĳ���Ǹ���ĵڼ��죬���磬2005��6��15�գ���Ӧ�ȼ���1~5�µ�����֮�� */
	for (i = 1; i <= month - 1; i++)
	{
		if (2 == i) /* �ж��Ƿ��Ƕ��·� */
		{
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))/* �ж�year�Ƿ����� */
			{
				sum = sum + yue[i] + 1;
			}
			else
			{
				sum = sum + yue[i];
			}
		}
		else
		{
			sum = sum + yue[i];
		}
	}
	
	sum = sum + day; //�µ����������յ��������Ǹ���ĵڼ���
	printf("It is the %dth day.\n", sum); //���ָ�����������Ǹ���ĵڼ���

	return 0;
}
