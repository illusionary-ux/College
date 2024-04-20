#pragma once
void Login(void)
{
	FILE* fp = fopen("login.txt", "r");
	char currentPassword[20];
	char currentUsername[20];
	if (fp == NULL)
	{
		printf("δ���ҵ���¼�ļ������½��û���������\n");
		createInitialPassword();
	}
	else
	{
		fclose(fp);
	}
	printf("�����뵱ǰ�û���: ");
	scanf("%s", currentUsername);
	printf("�����뵱ǰ����: ");
	scanf("%s", currentPassword);

	if (login_check(currentPassword, currentPassword))
	{
		printf("��¼�ɹ�\n");
	}
	else
	{
		printf("��¼ʧ��\n");
		exit;
	}
}

void createInitialPassword(void) {
	char initialPassword[20];
	char initialUsername[20];
	printf("����һ�����û���: ");
	scanf("%s", initialUsername);
	printf("����һ��������: ");
	scanf("%s", initialPassword);
	change(initialUsername, initialPassword);
	printf("��ʼ�û���Ϣ�����á�\n");
}

int login_check(char* username, char* password) {
	FILE* fp = fopen("login.txt", "r");
	if (fp == NULL) {
		printf("�޷��������ļ����ж�ȡ��\n");
		return 0;
	}
	char correctPassword[20];
	fscanf(fp, "%s", correctPassword);
	fclose(fp);
	if (strcmp(correctPassword, password) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void change(char* newUsername, char* newPassword) {
	FILE* fp = fopen("login.txt", "w");
	if (fp == NULL) {
		printf("�޷��������ļ�����д�롣\n");
		return;
	}
	fprintf(fp, "%s\n", newUsername);
	fprintf(fp, "%s", newPassword);
	fclose(fp);
}

void ShowMenu(void)
{
	printf("*******************************************\n");
	printf("*              ѧ������ϵͳ               *\n");
	printf("*******************************************\n");
	printf("*              1.���ѧ��                 *\n");
	printf("*              2.�鿴ѧ��                 *\n");
	printf("*              3.����ѧ��                 *\n");
	printf("*              4.�޸�ѧ��                 *\n");
	printf("*              5.����ѧ��                 *\n");
	printf("*              6.ɾ��ѧ��                 *\n");
	printf("*              0.�˳�                     *\n");
	printf("*******************************************\n");
	printf("����������ѡ��");
}

void FindStudent(void)
{

}
void AddStudent(void)
{

}
void DeleteStudent(void)
{

}
void ShowStudent(void)
{

}
void SaveStudent(void)
{

}
void LoadStudent(void)
{

}
void SortStudent(void)
{

}
void FreeStudent(void)
{

}