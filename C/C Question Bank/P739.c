/*
����Ĺ��ܣ�
	�Ӽ����������������ڣ�������������ǹ�Ԫ���������ĵڼ��졣
*/

#include <stdio.h>

int main(void)
{
	int  i, year, month, day, days = 0;
	int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("input a data(year-month-day):");
	scanf("%d-%d-%d", &year, &month, &day); //��������
	/* ����Ԫ1�굽��Ԫyear-1������������� */
	for (i=1; i<year; i++)
	{
		if ((i % 400 == 0) || ((i % 100 != 0) && (i % 4 == 0))) //i������
		{
			days = days + 366;
		}
		else //i�Ƿ�����
		{
			days = days + 365;
		}
	}
	
	/* ��1�µ�month-1���·ݵ�������� */
	for (i=1; i<=month-1; i++)
	{
		if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) //year������
		{
			if (i == 2) //i�������2��
			{
				days = days + mon[i] + 1;
			}
			else //i������ķ�2��
			{
				days = days + mon[i];
			}
		}
		else //year��������
		{
			days = days + mon[i];
		}
	}
	days = days + day; //�����ܵ�����
	printf("The result is %d.\n", days);

	return 0;
}

