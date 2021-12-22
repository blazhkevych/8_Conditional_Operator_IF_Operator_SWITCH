/*
4. Ввести дату и время (каждая компонента вводится отдельно) и
проверить корректность введённых значений.
*/

/*
с клавиатуры 6 значений по отдельности:
дата (день, месяц, год), время (часы, минуты, секунды)
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	int date_day{ 0 }, date_month{ 0 }, date_year{ 0 }, // дата (день, месяц, год)
		time_hours{ 0 }, time_minutes{ 0 }, time_seconds{ 0 }; // время (часы, минуты, секунды)

	enum MyEnum
	{
		January = 1, // Январь 
		February = 2, // Февраль 
		March = 3, // Март 
		April = 4, // Апрель 
		May = 5, // Май 
		June = 6, // Июнь 
		July = 7, // Июль 
		August = 8, // Август 
		September = 9, // Сентябрь 
		October = 10, // Октябрь 
		November = 11, // Ноябрь 
		December = 12 // Декабрь 
	};

	cout << "Введите год:" << endl;
	cin >> date_year;
	cout << "Введите месяц:" << endl;
	cin >> date_month;
	cout << "Введите день:" << endl;
	cin >> date_day;

	cout << "Введите часы:" << endl;
	cin >> time_hours;
	cout << "Введите минуты:" << endl;
	cin >> time_minutes;
	cout << "Введите день:" << endl;
	cin >> time_seconds;





	return 0;
}