#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *fp;
	char name[9], num[11], gender[3], course[15], input[9];
	int score, line = 1, flag = 0;
	
	printf("������Ҫ���ҳɼ���ѧ��������");
	gets(input);
	fp = fopen("xscj.txt", "r");
	if (NULL == fp)
	{
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
		return 0;
	}
	printf("\n���ҽ��Ϊ��\n");
	while (fscanf(fp, "%s %s %s %s %d", num, name, gender, course, &score) == 5)
	{
		if (strcmp(input, name) == 0)
		{
			flag = 1;
			printf("%d %s, %-8s, %s, %-14s, %d\n", line++, num, name, gender, course, score);
		}
	}
	if (flag == 0)
	{
		printf("�ļ���û���ҵ�����Ϊ��%s����ѧ��\n", input);
	}
	fclose(fp);
	return 0;
}
