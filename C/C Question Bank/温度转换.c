#include <stdio.h>

int main(void)
{
	float F = 69, C;  /* ������� */

	C = (float)(5.0 / 9 * (F - 32));  /* ���ݹ�ʽ���������¶� */
	printf("�����¶�Ϊ��%.2f\n", C);  /* ��������¶� */

	return 0;
}