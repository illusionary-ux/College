#include <stdio.h>

int main(void)
{
	int num, total; //�������������num�������������total��������ܼ�

	printf("please input num: "); //����Ļ�������ʾ���
	scanf("%d", &num); //�Ӽ�������һ��ʮ����������������num

	total = num * 30; //�����ܼ۲���������total

	printf("\ntotal=%d\n", total); //�������total��ֵ
	
	return 0;
}