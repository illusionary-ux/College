#include <stdio.h>

int main(void)
{
	int month;

	printf("please input the month number:");
	scanf("%d", &month); //�����·�

	
	
	if ((month > 12) || (month < 1)) //�Ӽ���������·���Ч
	{
		printf("\nInvalid month input !\n");
	}
	else //������·���Ч
	{
		/* ����if���Ĺ��ܣ�����month��ֵ�жϸ����м��� */	
		if ( 2 == month)
		{
			printf("2003.%d has 28 days\n", month); //��Ϊ2003�겻�����꣬���Զ��·���28��
		}
		else if ((4 == month) || (6 == month) || (9 == month) || (11 == month))
		{
			printf("2003.%d has 30 days\n", month); 
		}	
		else
		{
			printf("2003.%d has 31 days\n", month); 
		}
	}	
	
	return 0;
}