#include <stdio.h>

int main(void)
{
	int x, y, max; //�������, ���б���max�������x��y�еĽϴ�ֵ

	printf("please input x,y: "); //����Ļ�������ʾ���
	scanf("%d,%d", &x, &y); //�Ӽ�����������ʮ���������ֱ𸳸�����x��y

	/*����if�ṹ�����Ƚ�x��y�����ֵ���������ֵ��������max*/
	if (x > y) 
	{
		max = x;
	}
	else
	{
		max = y;
	}

	printf("\n%d is bigger\n", max); //�������max��ֵ
	
	return 0;
}