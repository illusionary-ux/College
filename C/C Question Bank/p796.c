#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int ch;

	fp = fopen("Test.txt", "w");
	if (NULL == fp)
	{
		printf("\nCreate file error!\n");
		exit(1);
	}
	printf("Input chars: ");
	ch = getchar(); //�Ӽ��̶�һ���ַ���������ch
	while ((char)ch != '!') //����ch�е��ַ����ǣ�
	{
		if ((char)ch >= 'a' && (char)ch <= 'z') //��Сд��ĸ
		{
			ch = ch - 32; //ת���ɴ�д��ĸ			
		}
		if (fputc(ch, fp) == EOF) //������ch�е��ַ�д��fpָ����ļ��У����fputc�ĺ���ֵΪEOF,˵��д����
		{
			printf("\nWriting file error!\n"); //���������Ϣ
			fclose(fp);
			exit(2); //�������򣬲������˳���2
		}

		ch = getchar(); //�Ӽ��̶�һ���ַ���������ch
	}

	fclose(fp);
	return 0;
}