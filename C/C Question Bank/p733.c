#include <stdio.h>

int main(void)
{
	char ch; //�������

	printf("Input a character: "); //����Ļ�������ʾ���
	ch = getchar(); //�Ӽ�������һ���ַ���������ch

	printf("\nAscii('%c') = 0x%x\n", ch, ch); //����ַ���ʮ������ASCII��

	return 0;
}