#include <stdio.h>

int main(void)
{
	int n; //�������

	printf("Please input an integer: "); //����Ļ�������ʾ��
	scanf("%d", &n); //�Ӽ�������һ��ʮ����������������n	

	if ((n % 5 == 0) && (n % 7 == 0)) //n����5����7��������
	{
		printf("\nYes.");
	}
	else 
	{
		printf("\nNo.");
	}
	
	return 0;
}