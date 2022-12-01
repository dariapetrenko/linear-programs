/* Використовуючи відповідні компоненти створити додаток для розв’язування 
наступної задачі:знайти значення виразу врахувавши область визначення.
варіант 6*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double vuraz, x, y, a;

	cout << "Область визначень x: будь яке число" << endl;
	cout << "Область визначень a: будь яке число" << endl;
	cout << "Область визначень y: будь яке число окрім 0" << endl;
	cout << " " << endl;

	cout << "Введіть значення õ: ";
	cin >> x;

	cout << "Введіть значення y: ";
	cin >> y;

	cout << "Введіть значення a: ";
	cin >> a;
	cout << " " << endl;

	if (y != 0)
	{
		vuraz = ((y * y - x) / (x * x - y + 1)) - ((a * a - x + 2)) / (x * x - exp(x) - 2);
		cout << "Значення виразу = " << vuraz << endl;
	}
	else
	{
		cout << "Ви ввели y=0, порушено умову" << endl;
		exit;
	}
}
