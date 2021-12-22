/*
1. Написать программу, которая предлагает пользователю ввести номер
дня недели и в ответ показывает название этого дня. Решить с
использованием if и switch.
*/
//использовать енам
//еще решить используя иф

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	cout << "Выберите вариант решения задачи: "
		<< "\n1. Решение с использованием if "
		<< "\n2. Решение с использованием switch " << endl;

	int choice{ 0 };
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		cout << "Введите номер дня недели" << endl;

		enum Week
		{
			Monday = 1,
			Tuesday = 2,
			Wednesday = 3,
			Thursday = 4,
			Friday = 5,
			Saturday = 6,
			Sunday = 7
		};

		int week{ 0 };
		cin >> week;

		if (week == Monday)
			cout << "Понедельник" << endl;
		else if (week == Tuesday)
			cout << "Вторник" << endl;
		else if (week == Wednesday)
			cout << "Среда" << endl;
		else if (week == Thursday)
			cout << "Четверг" << endl;
		else if (week == Friday)
			cout << "Пятница" << endl;
		else if (week == Saturday)
			cout << "Суббота" << endl;
		else if (week == Sunday)
			cout << "Воскресенье" << endl;
	}
	break;

	case 2:
	{
		cout << "Введите номер дня недели" << endl;

		enum Week
		{
			Monday = 1,
			Tuesday = 2,
			Wednesday = 3,
			Thursday = 4,
			Friday = 5,
			Saturday = 6,
			Sunday = 7
		};

		int week{ 0 };
		cin >> week;

		switch (week)
		{
		case Monday:
			cout << "Понедельник" << endl;
			break;

		case Tuesday:
			cout << "Вторник" << endl;
			break;

		case Wednesday:
			cout << "Среда" << endl;
			break;

		case Thursday:
			cout << "Четверг" << endl;
			break;

		case Friday:
			cout << "Пятница" << endl;
			break;

		case Saturday:
			cout << "Суббота" << endl;
			break;

		case Sunday:
			cout << "Воскресенье" << endl;
			break;

		default:
			cout << "Попробуйте еще раз!" << endl;
			break;
		}
	}
	break;
	default:
		cout << "Попробуйте еще раз !" << endl;
		break;
	}

	return 0;
}