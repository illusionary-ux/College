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
		exit(0);
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
	char correctUsername[20];
	fscanf(fp, "%s", correctPassword);
	fscanf(fp, "%s", correctUsername);
	fclose(fp);
	if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
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
	printf("*              1.¼��ѧ��                 *\n");
	printf("*              2.�鿴ѧ��                 *\n");
	printf("*              3.����ѧ��                 *\n");
	printf("*              4.�޸�ѧ��                 *\n");
	printf("*              5.����ѧ��                 *\n");
	printf("*              6.ɾ��ѧ��                 *\n");
	printf("*              7.����ѧ��                 *\n");
	printf("*              8.��ʾ������               *\n");
	printf("*              0.�˳�                     *\n");
	printf("*******************************************\n");
	printf("����������ѡ��");
}

void AddStudent(void)
{
	system("cls");
	int n;
	FILE* fp = fopen("student.txt", "w");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	Student s;
	printf("�������������\n");
	scanf("%d", &n);
	printf("ѧ��\t����\t�Ա�0Ů��/1���ԣ�\t����1\t����2\t����3\t����4\t����5\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s %s %d %d %d %d %d %d", s.num, s.name, &s.gender, &s.score[0], &s.score[1], &s.score[2], &s.score[3], &s.score[4]);
		s.average = (s.score[0] + s.score[1] + s.score[2] + s.score[3] + s.score[4]) / 5.0;
		fprintf(fp, "%s %s %d %d %d %d %d %d %.2f\n", s.num, s.name, s.gender, s.score[0], s.score[1], s.score[2], s.score[3], s.score[4], s.average);
	}
	fclose(fp);
	printf("ѧ����Ϣ¼��ɹ�\n");
	printf("��������˳�\n");
	getchar();
	getchar();
	system("cls");
}


void ShowStudent(void)
{
	system("cls");
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	Student s;
	printf("\nѧ��\t����\t�Ա�\t����1\t����2\t����3\t����4\t����5\tƽ����\n");
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s.num, s.name, &s.gender, &s.score[0], &s.score[1], &s.score[2], &s.score[3], &s.score[4], &s.average) != EOF)
	{
		printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s.num, s.name, s.gender, s.score[0], s.score[1], s.score[2], s.score[3], s.score[4], s.average);
	}
	printf("��������˳�\n");
	fclose(fp);
	getchar();
	system("cls");
}
void FindStudent(void)
{
	system("cls");
	printf("������Ҫ���ҵ�ѧ��ѧ�ţ�");
	char aim[20], flag = 0;
	scanf("%s", aim);
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	Student s;
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s.num, s.name, &s.gender, &s.score[0], &s.score[1], &s.score[2], &s.score[3], &s.score[4], &s.average) != EOF)
	{
		if (strcmp(aim, s.num) == 0)
		{
			printf("���ҳɹ�");
			printf("\nѧ��\t����\t�Ա�\t����1\t����2\t����3\t����4\t����5\tƽ����\n");
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s.num, s.name, s.gender, s.score[0], s.score[1], s.score[2], s.score[3], s.score[4], s.average);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("����ʧ��\n");

	}
	fclose(fp);
	printf("��������˳�\n");
	getchar();
	getchar();
	system("cls");
}
void EditStudent(void)
{
	system("cls");
	printf("������Ҫ�޸ĵ�ѧ��ѧ�ţ�");
	char aim[20], flag = 0;
	scanf("%s", aim);
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	Student s[100];
	int i = 0;
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s[i].num, s[i].name, &s[i].gender, &s[i].score[0], &s[i].score[1], &s[i].score[2], &s[i].score[3], &s[i].score[4], &s[i].average) != EOF)
	{
		i++;
	}
	fclose(fp);//��ȡ�ļ�
	for (int j = 0; j < i; j++)
	{
		if (strcmp(aim, s[j].num) == 0)
		{
			printf("���ҳɹ�,ԭ��������");
			printf("\nѧ��\t����\t�Ա�\t����1\t����2\t����3\t����4\t����5\tƽ����\n");
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
			printf("�������µķ�����");
			scanf("%d %d %d %d %d", &s[j].score[0], &s[j].score[1], &s[j].score[2], &s[j].score[3], &s[j].score[4]);
			s[j].average = (s[j].score[0] + s[j].score[1] + s[j].score[2] + s[j].score[3] + s[j].score[4]) / 5.0;
			flag = 1;
		}
	}
	fp = fopen("student.txt", "w");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	for (int j = 0; j < i; j++)
	{
		fprintf(fp, "%s %s %d %d %d %d %d %d %.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
	}
	if (flag == 0)
	{
		printf("����ʧ��\n");
	}
	else
	{
		printf("�޸ĳɹ�\n");
	}
	fclose(fp);
	printf("��������˳�\n");
	getchar();
	getchar();
	system("cls");
}


void SortStudent(void)
{
	system("cls");
	Student s[100];
	int i = 0;
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s[i].num, s[i].name, &s[i].gender, &s[i].score[0], &s[i].score[1], &s[i].score[2], &s[i].score[3], &s[i].score[4], &s[i].average) != EOF)
	{
		i++;
	}
	fclose(fp);
	printf("��ѡ������ʽ��1.��ѧ������ 2.��ƽ��������\n");
	int choice;
	scanf("%d", &choice);
	if (choice == 1)
	{
		for (int j = 0; j < i - 1; j++)
		{
			for (int k = 0; k < i - j - 1; k++)
			{
				if (strcmp(s[k].num, s[k + 1].num) > 0)
				{
					Student temp = s[k];
					s[k] = s[k + 1];
					s[k + 1] = temp;
				}
			}
		}
		printf("����ɹ�\n");
		printf("\nѧ��\t����\t�Ա�\t����1\t����2\t����3\t����4\t����5\tƽ����\n");
		for (int j = 0; j < i; j++)
		{
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
		}
	}
	else if (choice == 2)
	{
		for (int j = 0; j < i - 1; j++)
		{
			for (int k = 0; k < i - j - 1; k++)
			{
				if (s[k].average < s[k + 1].average)
				{
					Student temp = s[k];
					s[k] = s[k + 1];
					s[k + 1] = temp;
				}
			}
		}
		printf("����ɹ�\n");
		printf("\nѧ��\t����\t�Ա�\t����1\t����2\t����3\t����4\t����5\tƽ����\n");
		for (int j = 0; j < i; j++)
		{
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
		}
	}
	else
	{
		printf("�������\n");
		return 0;
	}
	printf("��������˳�\n");
	getchar();
	getchar();
	system("cls");

}
void DeleteStudent(void)
{
	system("cls");
	printf("������Ҫɾ����ѧ��ѧ�ţ�");
	char aim[20], flag = 0;
	scanf("%s", aim);
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	Node* head = NULL, * tail = NULL, * p, * q = NULL;
	Student tmp;
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", tmp.num, tmp.name, &tmp.gender, &tmp.score[0], &tmp.score[1], &tmp.score[2], &tmp.score[3], &tmp.score[4], &tmp.average) != EOF)
	{
		p = (Node*)malloc(sizeof(Node));
		p->student = tmp;
		if (head == NULL)
		{
			head = p;
		}
		if (tail != NULL)
		{
			tail->next = p;
		}
		tail = p;
		p->next = NULL;/*������*/
	}

	p = head;
	while (p != NULL)
	{
		if (strcmp(aim, p->student.num) == 0)
		{
			flag = 1;
			if (p == head)
			{
				head = p->next;
			}
			else
			{
				q->next = p->next;
			}
			free(p);
			break;
		}
		q = p;
		p = p->next;

	}
	fclose(fp);
	if (flag == 0)
	{
		printf("����ʧ��\n");

	}
	else
	{
		FILE* fp = fopen("student.txt", "w");
		if (fp == NULL)
		{
			printf("�ļ���ʧ��\n");
			return 0;
		}
		p = head;
		while (p != NULL)
		{
			fprintf(fp, "%s %s %d %d %d %d %d %d %.2f\n", p->student.num, p->student.name, p->student.gender, p->student.score[0], p->student.score[1], p->student.score[2], p->student.score[3], p->student.score[4], p->student.average);
			p = p->next;
		}
		fclose(fp);
		printf("ɾ���ɹ�\n");

	}
	printf("��������˳�\n");
	getchar();
	getchar();
	system("cls");
}
void InsertStudent(void)
{
	system("cls");
	printf("������Ҫ�����ѧ����Ϣ��");
	Node* head = NULL, * tail = NULL, * p, * q = NULL, * new;
	new = (Node*)malloc(sizeof(Node));
	scanf("%s %s %d %d %d %d %d %d", new->student.num, new->student.name, &new->student.gender, &new->student.score[0], &new->student.score[1], &new->student.score[2], &new->student.score[3], &new->student.score[4]);
	new->student.average = (new->student.score[0] + new->student.score[1] + new->student.score[2] + new->student.score[3] + new->student.score[4]) / 5.0;
	new->next = NULL;
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	Student tmp;
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", tmp.num, tmp.name, &tmp.gender, &tmp.score[0], &tmp.score[1], &tmp.score[2], &tmp.score[3], &tmp.score[4], &tmp.average) != EOF)
	{
		p = (Node*)malloc(sizeof(Node));
		p->student = tmp;
		if (head == NULL)
		{
			head = p;
		}
		if (tail != NULL)
		{
			tail->next = p;
		}
		tail = p;
		p->next = NULL;/*������*/
	}
	fclose(fp);
	printf("������Ҫ�����λ�ã�");
	int pos;
	scanf("%d", &pos);
	while (pos < 1 || pos > GetStuNum(head) + 1)
	{
		printf("�����������������\n");
		scanf("%d", &pos);
	}
	p = head;
	if (pos == 1)
	{
		new->next = head;
		head = new;
	}
	else
	{
		for (int i = 1; i < pos - 1; i++)
		{
			p = p->next;
		}
		new->next = p->next;
		p->next = new;
	}
	FILE* fp1 = fopen("student.txt", "w");
	if (fp1 == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	p = head;
	while (p != NULL)
	{
		fprintf(fp1, "%s %s %d %d %d %d %d %d %.2f\n", p->student.num, p->student.name, p->student.gender, p->student.score[0], p->student.score[1], p->student.score[2], p->student.score[3], p->student.score[4], p->student.average);
		p = p->next;
	}
	fclose(fp1);
	printf("����ɹ�\n");
	printf("��������˳�\n");
	getchar();
	getchar();
	system("cls");
}
void ShowFailStudent(void) {
	system("cls");
	Student s[100];
	int i = 0;
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL) {
		printf("�ļ���ʧ��\n");
		return;  // ����Ϊֱ�� return
	}
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s[i].num, s[i].name, &s[i].gender, &s[i].score[0], &s[i].score[1], &s[i].score[2], &s[i].score[3], &s[i].score[4], &s[i].average) != EOF) {
		if (i < 99) { // ��ֹ����Խ��
			i++;
		}
	}
	fclose(fp);

	printf("������Ҫ�鿴�Ŀ�Ŀ (1-5):\n");
	int choice;
	scanf("%d", &choice);
	if (choice < 1 || choice > 5) {
		printf("�������\n");
		return;
	}

	printf("������ѧ����Ϣ����:\n");
	printf("\nѧ��\t����\t�Ա�\t����1\t����2\t����3\t����4\t����5\tƽ����\n");
	int flag = 0;
	for (int j = 0; j < i; j++) {
		if (s[j].score[choice - 1] < 60) {
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
			flag = 1;
		}
	}
	if (flag == 0) {
		printf("�޲�����ѧ��\n");
	}

	printf("��������˳�\n");
	getchar(); // ���ڲ���֮ǰ�Ļس�
	getchar(); // �ȴ��û�����
	system("cls");
}

int GetStuNum(Node* head)
{
	Node* p = head;
	int num = 0;
	while (p != NULL)
	{
		num++;
		p = p->next;
	}
	return num;
}