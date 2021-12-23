/*
4. Ввести дату и время (каждая компонента вводится отдельно) и
проверить корректность введённых значений.
*/

/*
С клавиатуры вводим 6 значений по отдельности:
- дата (день, месяц, год). День проверяется в контексте месяца и года.
	31 мая это правильно, 31 апреля не правильно,
	29 февраля 2000 года это правильно(2000 год високосный), 29 февраля 2001 года не правильно (2001 год не високосный)
- время (часы, минуты, секунды). Часы, минуты, секунды проверить по отдельности.
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
	if (date_year < 1)
		cout << "Вы ввели не корректный год" << endl;

	cout << "Введите месяц:" << endl;
	cin >> date_month;
	if (date_month > 0 && date_month < 13)
		cout << "Вы ввели не корректные часы" << endl;

	cout << "Введите день:" << endl;
	cin >> date_day;


	cout << "Введите часы:" << endl;
	cin >> time_hours;
	if (time_hours < 0 || time_hours > 59)
		cout << "Вы ввели не корректные часы" << endl;

	cout << "Введите минуты:" << endl;
	cin >> time_minutes;
	if (time_minutes < 0 || time_minutes > 59)
		cout << "Вы ввели не корректные минуты" << endl;

	cout << "Введите секунды:" << endl;
	cin >> time_seconds;
	if (time_seconds < 0 || time_seconds > 59)
		cout << "Вы ввели не корректные секунды" << endl;




	return 0;
}