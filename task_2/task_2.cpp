/*
2. Написать программу перевода денежной суммы из гривен в евро,
доллары или российские рубли. Решить с использованием if и switch.
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	cout << "Введите сумму в гривнах: " << endl;
	double grn{ 0.0 };
	cin >> grn;

	cout << "\nВыберите валюту в которую будет переведена гривна: "
		<< "\n1. Доллары."
		<< "\n2. Евро." << endl;

	char key{ 0 };
	cin >> key;
	cout << endl;

	switch (key)
	{
	case '1':
		cout << grn << " грн. = " << 0.037 * grn << " дол." << endl;
		break;

	case '2':
		cout << grn << " грн. = " << 0.033 * grn << " евр." << endl;
		break;
	}

	return 0;
}