#include <stdio.h>

int main(void)
{
	int num, ge, shi, bai, qian, sum;  /*�������*/

	printf("������һ����λ������\n");  /*����Ļ�������ʾ��*/
	scanf("%d", &num);  /*�Ӽ�������һ����λ������������num*/
	ge = num % 10;  /*�����λ����*/
	shi = num / 10 % 10;  /*����ʮλ����*/
	bai = num /100 % 10; /*�����λ����*/
	qian = num / 1000;  /*����ǧλ����*/

	sum = ge + shi + bai + qian;  /*�����λ����֮��*/

	printf("��λ����֮��Ϊ��%d\n", sum);  /*������*/

	return 0;
}