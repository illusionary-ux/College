#include <stdio.h>

int main(void)
{
	int x, y; //�������

	printf("please input x,y: "); //����Ļ�������ʾ���
	scanf("%d %d", &x, &y); //�Ӽ�����������ʮ���������ֱ𸳸�����x��y

	/*����if�ṹ�����Ƚ�x��y�Ƿ����*/
	if (x == y) 
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}

	return 0;
}