/*
7. Ввести любую дату (день, месяц, год вводятся по отдельности) и вывести
следующую за ней дату.
*/

/*
вводим 30 апреля 2000 года, то должны вывести 1 мая 2000 года (2000.4.30 > 2000.5.1) => тест пройден
вводим 31 декабря 2121 года, то 1 января 2122 года (2121.12.31 > 2122.1.1) => тест пройден
	2000.2.27 > 2000.2.28 => тест не пройден
	2000.2.28 > 2000.2.29 => тест не пройден
	2000.2.29 > 2000.3.1 => тест не пройден

	2001.2.27 > 2001.2.28 => тест не пройден
	2001.2.28 > 2001.3.1 => тест не пройден
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	int date_day{ 0 }, date_month{ 0 }, date_year{ 0 }; // дата (день, месяц, год)

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
					&& (date_day == February) && (date_day > 0 && date_day < 29)) // если 1-28 февраля, не високосный год
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
				cout << "Все введённые значения корректны."
					<< "\nДата: " << date_day << '.' << date_month << '.' << date_year << endl;

				switch (date_month)
				{
				case April: // расчет следующей даты за введенной, для месяцев c 30 днями
				case June:
				case September:
				case November:
					date_day++;
					if (date_day > 30)
					{
						date_day = 1;
						date_month++;
						if (date_month > 12)
						{
							date_month = 1;
							date_year++;
						}
					}
					break;

				case January: // расчет следующей даты за введенной, для месяцев c 31 днем
				case March:
				case May:
				case July:
				case August:
				case October:
				case December:
					date_day++;
					if (date_day > 31)
					{
						date_day = 1;
						date_month++;
						if (date_month > 12)
						{
							date_month = 1;
							date_year++;
						}
					}
					break;

				case February: // расчет следующей даты за введенной, для февраля (как высокосного так и не высокосного)
					date_day++;
					if ((date_year % 400 == 0 || (date_year % 100 != 0 && date_year % 4 == 0)) && (date_day == 29)) // високосный
					{
						date_day = 1;
						date_month++;
						if (date_month > 12)
						{
							date_month = 1;
							date_year++;
						}
					}
					else if (date_day == 28) // не високосный
					{
						date_day = 1;
						date_month++;
						if (date_month > 12)
						{
							date_month = 1;
							date_year++;
						}
					}
					break;
				}
				cout << "Следующая дата: " << date_day << '.' << date_month << '.' << date_year << endl;
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