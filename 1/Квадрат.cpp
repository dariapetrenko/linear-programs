#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

int main() {
    float s, r, a, kvads, kvadp;
    cout << "������ ����� ���� S:" << endl;
    cin >> s;
    r = sqrt(s / pi);
    //r ���� = ������� ������� ��������
    a = r * 2;
    kvads = pow(a, 2);
    kvadp = 4 * a;
    cout << "����� �������� = " << kvads << endl;
    cout << "�������� �������� = " << kvadp;
}