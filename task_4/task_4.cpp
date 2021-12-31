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

/*
Правильно (дата (день, месяц, год)):
31.05.2001 => тест пройден.
29.02.2000 (високосный год) => тест пройден.

Не правильно (дата (день, месяц, год)):
31.04.2001 => тест пройден.
29.02.2001 (не високосный год) => тест пройден.

2000.2.27  => тест не пройден
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	int date_day{ 0 }, date_month{ 0 }, date_year{ 0 }, // дата (день, месяц, год)
		time_hours{ 0 }, time_minutes{ 0 }, time_seconds{ 0 }; // время (часы, минуты, секунды)

	enum Months
	{
		January = 1, // Январь, 31 день
		February = 2, // Февраль, 28 дней (В високосные годы вводится дополнительный день — 29 февраля.)
		March = 3, // Март, 31 день 
		April = 4, // Апрель, 30 дней 
		May = 5, // Май, 31 день 
		June = 6, // Июнь, 30 дней 
		July = 7, // Июль, 31 день 
		August = 8, // Август, 31 день 
		September = 9, // Сентябрь, 30 дней 
		October = 10, // Октябрь, 31 день 
		November = 11, // Ноябрь, 30 дней 
		December = 12 // Декабрь, 31 день 
	};

	cout << "Введите год ( > 1 ):" << endl;
	cin >> date_year;
	if (date_year > 0)
	{
		cout << "Введите месяц ( > 0 и < 13):" << endl;
		cin >> date_month;
		if (date_month > 0 && date_month < 13)
		{
			cout << "Введите день ( > 0 и < 32):" << endl;
			cin >> date_day;
			if (
				((date_year % 400 == 0 || (date_year % 100 != 0 && date_year % 4 == 0))
					&& (date_month == February) && (date_day == 29)) // если 29 февраля в високосном году
				|| ((date_year % 400 == 0 || (date_year % 100 != 0 && date_year % 4 == 0))
					&& (date_month == February) && (date_day > 0 && date_day < 29)) // если 1-28 февраля, не високосный год
				|| ((date_month == January
					|| date_month == March
					|| date_month == May
					|| date_month == July
					|| date_month == August
					|| date_month == October
					|| date_month == December) && (date_day > 0 && date_day < 32)) // все месяца, в которых 31 день
				|| ((date_month == April
					|| date_month == June
					|| date_month == September
					|| date_month == November) && (date_day > 0 && date_day < 31)) // все месяца, в которых 30 дней
				)
			{
				cout << "Введите часы ( > -1 и < 24 ):" << endl;
				cin >> time_hours;
				if (time_hours > -1 && time_hours < 24)
				{
					cout << "Введите минуты ( > -1 и < 60 ):" << endl;
					cin >> time_minutes;
					if (time_minutes > -1 && time_minutes < 60)
					{
						cout << "Введите секунды( > 0 и < 60 ):" << endl;
						cin >> time_seconds;
						if (time_seconds > 0 && time_seconds < 60)
						{
							cout << "Все введённые значения корректны."
								<< "\nДата: " << date_day << '.' << date_month << '.' << date_year
								<< "\nВремя: " << time_hours << ':' << time_minutes << ':' << time_seconds << endl;
						}
						else
							cout << "Введите корректные секунды." << endl;
					}
					else
						cout << "Введите корректные минуты." << endl;
				}
				else
					cout << "Введите корректные часы." << endl;
			}
			else
				cout << "Введите корректный день." << endl;
		}
		else
			cout << "Введите корректный месяц." << endl;
	}
	else
		cout << "Введите корректный год." << endl;

	return 0;
}