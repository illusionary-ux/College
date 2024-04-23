#include"define.h"
#include"function.h"

int main(void)
{
	int choice;

	Login();
	getchar();//ere getchar() is used to get the '\n' character left in the buffer by the scanf() function in the Login() function.
	system("cls");
	do {
		ShowMenu();
		choice = _getch();

		switch (choice) {
		case '1':
			AddStudent();
			break;
		case '2':
			ShowStudent();
			break;
		case '3':
			FindStudent();
			break;
		case '4':
			EditStudent();
			break;
		case '5':
			SortStudent();
			break;
		case '6':
			DeleteStudent();
			break;
		case '7':
			InsertStudent();
			break;
		case '8':
			ShowFailStudent();
			break;
		case '0':
			printf("��лʹ��ѧ������ϵͳ���ټ���\n");
			break;
		default:
			system("cls");
			printf("��Ч���룬������ѡ��\n");

		}
	} while (choice != '0');
	return 0;
}