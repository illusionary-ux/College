/* 
����Ĺ��ܣ�
	�Ӽ�������3���������������ֵ��������
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	int shu1, shu2, shu3, max;

	printf("Input 3 numbers: ");
	scanf("%d,%d,%d", &shu1, &shu2, &shu3); //�Ӽ�������3������

	
	if (abs(shu1) > abs(shu2))  //����abs�Ĺ�������ĳ�������ľ���ֵ
	{
		max = shu1; //���shu1�ľ���ֵ����shu2�ľ���ֵ����shu1��ֵ��������max
	}
	else
	{
		max = shu2; //���shu2�ľ���ֵ����shu1�ľ���ֵ����y��ֵ��������max
	}
	if (abs(shu3) > abs(max))
	{
		max = shu3; //���shu3�ľ���ֵ����max�ľ���ֵ����shu3��ֵ��������max
	}
	
	printf("The number with maxinum absolute value is %d.\n", max); //�������ֵ������
	
	return 0;
}