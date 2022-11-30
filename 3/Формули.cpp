/* Написати програму, яка обчислює вирази за двома формулами.
Попередньо підготуйте тестові приклади для другої формули з допомогою калькулятора 
(результати обчислення за двома формулами мають співпадати)*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a = 1;
	float z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
	cout << z1; /* result is z = 1.83823 */
	return 0; 
}


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a = 1;
	float z2 = 4 * cos(a / 2) * cos(5 * a / 2) * cos(4 * a);
	cout << z2; 
	return 0; /* result is z = 1.83823 */
}
