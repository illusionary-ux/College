#include <stdio.h>

int main(void)
{
	int num, yushu, sum = 0;

	printf("������һ������");
	scanf("%d", &num);
	
	printf("\n�����ĸ�λ��֮����Ϊ��");
	do
	{
		yushu = num % 10; //����õ�num�ĸ�λ���֣�����������yushu
		num = num / 10; //num��10�����������λ����
		sum = sum + yushu; //����λ�����ۼ�
		printf("%d", yushu); //����λ�������
	} while (num != 0); //���num��ֵΪ0��˵���������ֶ��Ѿ���������꣬ѭ��ֹͣ������ѭ������
	
	printf("\n�õĸ�λ��֮��Ϊ��%d\n", sum);

	return 0;


}