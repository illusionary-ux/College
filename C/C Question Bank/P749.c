#include <stdio.h>

int main(void)
{
	int num, hang, lie, shu[5][5]; 

	printf("Please input an integer: ");
	scanf("%d", &num);

	for (hang = 0; hang < 5; hang++)
	{
		for (lie = 0; lie < 5; lie++)
		{
			shu[hang][lie] = num + hang + lie; //������Ŀ�����ĳ�������Ч��ʾ���ƶϣ�����Ԫ�ص�ֵΪ��num + hang��Ԫ���б꣩+ lie��Ԫ���б꣩
		}
	}
	for (hang = 0; hang < 5; hang++)
	{
		for (lie = 0; lie < 5; lie++) //��forѭ���Ĺ��������һ��
		{
			printf("%4d", shu[hang][lie]);
		}
		printf("\n"); //����һ�����ݺ���
	}
	
	return 0;
}