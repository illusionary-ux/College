#include <stdio.h>

int main(void)
{
	int num, ge, shi, bai;  /*�������*/

	printf("������һ����λ������\n");  /*����Ļ�������ʾ��*/
	scanf("%d", &num);  /*�Ӽ�������һ����λ������������num*/
	ge = num % 10;  /*�����λ����*/
	shi = num / 10 % 10;  /*����ʮλ����*/
	bai = num /100 % 10; /*�����λ����*/
	
	printf("����Ϊ��%d%d%d\n", ge, shi, bai);  /*������*/

	return 0;
}