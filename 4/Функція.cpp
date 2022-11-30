/*Скласти структурну схему алгоритму та програму обчислення значень
функції y=F(x) відповідно до завдань, зазначених у таблиці.
Примітка. Значення першого з двох параметрів, які наведені в таблиці,
задати як константу, значення другого ввести з клавіатури
варіант 26*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double const  t = 2;
	double b, y, x, a;

	cout << "b = ";
	cin >> b;
	cout << " " << endl;

	a = exp(t + b);
	cout << "Перший вираз a = " << a << endl;
	cout << " " << endl;

	x = sqrt(a + b);
	cout << "Другий вираз x = " << x << endl;
	cout << " " << endl;

	y = pow(log10(abs(x + a)), 2);
	cout << "Третій вираз y = " << y << endl;

	return 0;
}
