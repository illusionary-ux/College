#include <stdio.h>

int main(void)
{
	int i, ge, shi, bai, num, flag;

	printf("Please Input a number: ");
	scanf("%d", &num);

	printf("\nResult: ");	
	flag = 0; //�ж�ǰ��0��������flag
	for (i = 100; i<=999; i++)
	{
		ge = i % 10;
		bai = i / 100;
		shi = (i - bai * 100) / 10;		
		if ((ge * shi * bai + shi * shi + ge * ge * ge) == num) 
		{
			printf("%5d", i); //i�������������i
			flag = 1; //i����������������flag��ֵ����Ϊ1
		}
	}
	if (flag == 0) //�жϽ���, ����flag��ֵ��ȻΪ0, ˵��û��������������λ��
	{
		printf("not Find!\n");
	}

	return 0;
}



