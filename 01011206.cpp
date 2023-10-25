#include <iostream>
#include <iomanip>
using namespace std;

double deposit(int money, int term, double percent, double tax_input)
{
	double tax = tax_input;
	double profit = money * percent / 100 * term / 12 * tax;
	cout << endl << "Прибуток від депозиту складе " << fixed << setprecision(1) << profit << " гривень." << endl;
	return profit;
}
int main()
{
	int money, term;
	double percent, tax_input;

	system("chcp 1251 > nul");

	cout << "Ця програма розраховує прибуток від розміщення депозита певної суми на певний період під певний відсоток." << endl << endl;

	cout << "Введіть сумму на яку бажаєте створити депозит: ";
	cin >> money;
	if (money <= 0)
	{
		cout << endl << "Сума депозиту не може бути рівною нулю або від'ємною." << endl;
		return 0;
	}

	cout << endl << "Введіть термін на який бажаєте внести депозит від 1 до 15 місяців: ";
	cin >> term;
	if (term < 1 || term > 15)
	{
		cout << endl << "Термін депозиту не може бути менше 1 або більше 15 місяців." << endl;
		return 0;
	}

	cout << endl << "Введіть відсоткову ставку депозиту: ";
	cin >> percent;
	if (percent <= 0)
	{
		cout << endl << "Відсоткова ставка не може бути рівною нулю або бути від'ємною." << endl;
		return 0;
	}

	cout << endl << "Введіть коефіцієнт оподаткування (0.805 або 1): " << endl;
	cin >> tax_input;
	if (tax_input != 1.0 && tax_input != 0.805)
	{
		cout << "Податок може бути тільки 0.805 або 1." << endl;
		return 0;
	}

	deposit(money, term, percent, tax_input);
}