#include <iostream>
using namespace std;
int main() {
	setlocale(0, "rus");
	int n, m = 0;
	cout << "Ведите n (n > 3 и не четное): ";
	cin >> n;
	if (n <= 3 || n % 2 == 0) {
		while (n <= 3 || n % 2 == 0) {
			m = m++;
			if (m == 3) {
				cout << "дорогой пользователь, лимит неправильных попыток ввода значения n исчерпан, программа закончила свою работу" << " " << "\n";
				return 0;
			}
			cout << "данному треугольнику нельзя задавать такое значение основания, пожалуйста введите новое значение n (n > 2): ";
			cin >> n;
		}
	}
	int s = (n + 1) / 2;
	int p = (n + 1) / 2 - 1;
	int z = 1;
	for (int i = 1; i <= s; i++)
	{
		for (int j = 1; j <= p; j++)
			cout << " ";
		p--;
		for (int k = 1; k <= z; k++)
			cout << "*";
		cout << "\n";
		z +=2;
	}
	return 0;
}