#include <iostream>//12344444444444
using namespace std;
const int s = 5;
int nums[s] = { 0 };
int chek_pt = 0, chek_lnt = 0, chek_mg = 0; //19% по кредиту
const int ptprc[10] = { 15, 85, 80, 140, 70, 81, 250, 145, 18, 136 };
const int lntprc[10] = { 16, 83, 95, 110, 70, 85, 300, 148, 20, 200 };
const int mgprc[10] = { 17, 80, 90, 180, 70, 87, 310, 147, 30, 130 };
float itog = 0;
/* Хлеб = 0
* Молоко = 1
* Яйца = 2
* Коробка конфет = 3
* Печенье = 4
* Кефир = 5
* Мясо = 6
* Сигареты = 7
* Жевачка = 8
* Бананы = 9
*/
void Magnit() {
	int ch[4] = { 0 };
	cout << "Выберите четыре продукта:" << endl;
	cout << "1. Хлеб\n2. Молоко\n3. Яйца\n4. Коробка конфет\n5. Печенье\n6. Кефир\n7. Мясо\n8. Сигареты\n9. Жевачка\n10. Бананы\n0. Окончить выбор\n";
	int count = 0;
	for (count; count < 4; count++) {
		cin >> ch[count];
		if (ch[count] == 0) {
			break;
		}
		chek_mg += mgprc[ch[count] - 1];
	}
	cout << "Ваш чек: " << chek_mg << endl;
	itog += chek_mg;
	chek_mg = 0;
}
void Lenta() {
	int ch[4] = { 0 };
	cout << "Выберите четыре продукта:" << endl;
	cout << "1. Хлеб\n2. Молоко\n3. Яйца\n4. Коробка конфет\n5. Печенье\n6. Кефир\n7. Мясо\n8. Сигареты\n9. Жевачка\n10. Бананы\n0. Окончить выбор\n";
	int count = 0;
	for (count; count < 4; count++) {
		cin >> ch[count];
		if (ch[count] == 0) {
			break;
		}
		chek_lnt += lntprc[ch[count] - 1];

	}
	cout << "Ваш чек: " << chek_lnt << endl;
	itog += chek_lnt;
	chek_lnt = 0;
}
void Pyat() {
	int ch[4] = { 0 };
	cout << "Выберите четыре продукта:" << endl;
	cout << "1. Хлеб\n2. Молоко\n3. Яйца\n4. Коробка конфет\n5. Печенье\n6. Кефир\n7. Мясо\n8. Сигареты\n9. Жевачка\n10. Бананы\n0. Окончить выбор\n";
	int count = 0;
	for (count; count < 4; count++) {
		cin >> ch[count];
		if (ch[count] == 0) {
			break;
		}
		chek_pt += ptprc[ch[count] - 1];

	}
	cout << "Ваш чек: " << chek_pt << endl;
	itog += chek_pt;
	chek_pt = 0;
}
void Skip();
int main()
{
	setlocale(LC_ALL, "ru");
	int ch;
	cout << "Выберите магазин: " << endl;
	cout << "1. Магнит\n2. Лента\n3. Пятерочка\n";
	cin >> ch;
	switch (ch)
	{
	case 1: Magnit(); Skip(); break;
	case 2: Lenta(); Skip(); break;
	case 3: Pyat(); Skip(); break;
	default:
		main();
	}
	itog += (itog / 100) * 19;
	cout << "По итогу вы потратили " << itog << " рублей, учитывая 19% по кредитной карте" << endl;
	system("pause");

}
void Skip() {
	int ch;
	cout << "Продолжить покупки?" << endl;
	cout << "1. Да\n2. Нет\n";
	cin >> ch;
	if (ch == 1) {
		main();
	}
}