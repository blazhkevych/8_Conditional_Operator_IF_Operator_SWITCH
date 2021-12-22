/*
2. Написать программу перевода денежной суммы из гривен в евро,
доллары или российские рубли. Решить с использованием if и switch.
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	enum Currency
	{
		Dollar = 1,
		Euro = 2
	};

	cout << "Выберите вариант решения задачи: "
		<< "\n1. Решение с использованием if "
		<< "\n2. Решение с использованием switch " << endl;

	int choice{ 0 };
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		cout << "Введите сумму в гривнах: " << endl;
		double grn{ 0.0 };
		cin >> grn;

		cout << "\nВыберите валюту в которую будет переведена гривна: "
			<< "\n1. Доллары."
			<< "\n2. Евро." << endl;

		int key{ 0 };
		cin >> key;
		cout << endl;

		if (key == Dollar)
			cout << grn << " грн. = " << 0.037 * grn << " дол." << endl;
		else if (key == Euro)
			cout << grn << " грн. = " << 0.033 * grn << " евр." << endl;
	}
	break;

	case 2:
	{
		cout << "Введите сумму в гривнах: " << endl;
		double grn{ 0.0 };
		cin >> grn;

		cout << "\nВыберите валюту в которую будет переведена гривна: "
			<< "\n1. Доллары."
			<< "\n2. Евро." << endl;

		int key{ 0 };
		cin >> key;
		cout << endl;

		switch (key)
		{
		case Dollar:
			cout << grn << " грн. = " << 0.037 * grn << " дол." << endl;
			break;

		case Euro:
			cout << grn << " грн. = " << 0.033 * grn << " евр." << endl;
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