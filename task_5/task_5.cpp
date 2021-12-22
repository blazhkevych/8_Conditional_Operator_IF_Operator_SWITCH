/*
5. Ввести с клавиатуры номер трамвайного билета и определить является
ли он счастливым.
6 значное число
счастливый - сумма первых 3 цифр равна сумме вторых 3 цифр
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	cout << "Введите номер трамвайного билетика (6значное число): " << endl;
	int ticket_number{ 0 };
	cin >> ticket_number;

	int ticket_number_1 = ticket_number / 100000; // 1 цифра
	int ticket_number_2 = ticket_number / 10000 % 10; // 2 цифра
	int ticket_number_3 = ticket_number / 1000 % 10; // 3 цифра
	int ticket_number_4 = ticket_number / 100 % 10; // 4 цифра
	int ticket_number_5 = ticket_number / 10 % 10; // 5 цифра
	int ticket_number_6 = ticket_number % 10; // 6 цифра

	if ((ticket_number_1 + ticket_number_2 + ticket_number_3)
		== (ticket_number_4 + ticket_number_5 + ticket_number_6))
		cout << "Мои поздравления, у Вас счастливый билетик !" << endl;
	else
		cout << "У Вас обычный билетик." << endl;

	return 0;
}