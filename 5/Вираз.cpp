/* �������������� ������� ���������� �������� ������� ��� ������������ 
�������� ������:������ �������� ������ ���������� ������� ����������.
������ 6*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double vuraz, x, y, a;

	cout << "������� ��������� x: ���� ��� �����" << endl;
	cout << "������� ��������� a: ���� ��� �����" << endl;
	cout << "������� ��������� y: ���� ��� ����� ���� 0" << endl;
	cout << " " << endl;

	cout << "������ �������� �: ";
	cin >> x;

	cout << "������ �������� y: ";
	cin >> y;

	cout << "������ �������� a: ";
	cin >> a;
	cout << " " << endl;

	if (y != 0)
	{
		vuraz = ((y * y - x) / (x * x - y + 1)) - ((a * a - x + 2)) / (x * x - exp(x) - 2);
		cout << "�������� ������ = " << vuraz << endl;
	}
	else
	{
		cout << "�� ����� y=0, �������� �����" << endl;
		exit;
	}
}