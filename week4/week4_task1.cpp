#include <iostream>
using namespace std;

enum class Month
{
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main()
{
	bool flag;
	int n;
	cout << endl << "Номер месяца ";
	cin >> n;
    cout << "Год вискокосный? ";
	cin >> boolalpha >> fixed >> flag;
	cout << "Количество дней в месяце № " << n << " - ";
	n--;
	Month n_1;
	n_1 = static_cast<Month>(n);
	switch (n_1)
	{
	case Month::January:
	case Month::March:
	case Month::May:
	case Month::July:
	case Month::August:
	case Month::October:
	case Month::December:
		cout << 31 << endl;
		break;
	case Month::April:
	case Month::June:
	case Month::September:
	case Month::November:
		cout << 30 << endl;
		break;
	case Month::February:
		if (flag)
		{
			cout << 29 << endl;
		}
		else
		{
			cout << 28 << endl;
		}
		break;
	default:
		break;
	}
}