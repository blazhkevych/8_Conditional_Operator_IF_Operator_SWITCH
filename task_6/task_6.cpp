/*
6. Программа расчета скидок. Вводится количество товара и стоимость за
штуку. Определить сумму скидки, если при суммарной стоимости 100
грн скидка составляет 3%, 200 – 5%, 300 и более – 7%. Решить с
использованием if и switch.
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	cout << "Программа расчета скидок." << endl;

	cout << "Введите Количество товара: " << endl;
	int quantity_of_goods{ 0 };
	cin >> quantity_of_goods;

	cout << "Введите стоимость за штуку: " << endl;
	double cost_per_item{ 0.0 };
	cin >> cost_per_item;

	double total_cost_of_goods = quantity_of_goods * cost_per_item; // суммарная стоимость товара

	if (total_cost_of_goods < 100)
	{
		cout << "У Вас нету скидки на товар." << endl;
		cout << "Итоговая стоимость товара: "
			<< total_cost_of_goods * 0.97 << " грн." << endl;
	}
	else if (total_cost_of_goods >= 100 && total_cost_of_goods < 200)
	{
		cout << "Стоимость товара: " << total_cost_of_goods << " грн." << endl;
		cout << "Ваша скидка составляет 3%." << endl;
		cout << "Итоговая стоимость товара, включая скидку: "
			<< total_cost_of_goods * 0.97 << " грн." << endl;
	}
	else if (total_cost_of_goods >= 200 && total_cost_of_goods < 300)
	{
		cout << "Стоимость товара: " << total_cost_of_goods << " грн." << endl;
		cout << "Ваша скидка составляет 5%." << endl;
		cout << "Итоговая стоимость товара, включая скидку: "
			<< total_cost_of_goods * 0.95 << " грн." << endl;
	}
	else if (total_cost_of_goods >= 300)
	{
		cout << "Стоимость товара: " << total_cost_of_goods << " грн." << endl;
		cout << "Ваша скидка составляет 7%." << endl;
		cout << "Итоговая стоимость товара, включая скидку: "
			<< total_cost_of_goods * 0.93 << " грн." << endl;
	}

	return 0;
}